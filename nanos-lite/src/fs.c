#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
    for ( int fd = 0; fd < FILENUM; fd += 1 )
    {
        if ( file_table[fd].read == NULL ) {
            file_table[fd].read = ramdisk_read;
            Log("%s has no read func set, using default ramdisk_read", file_table[fd].name);
        }
        if ( file_table[fd].write == NULL ) {
            file_table[fd].write = ramdisk_write;
            Log("%s has no write func set, using default ramdisk_write", file_table[fd].name);
        }
    }
    // TODO: initialize the size of /dev/fb
    AM_GPU_CONFIG_T gpu_config;
    ioe_read(AM_GPU_CONFIG, &gpu_config);
    int width = gpu_config.width, height = gpu_config.height;
    int fb_fd = fs_open("/dev/fb", 0, 0);
    file_table[fb_fd].size = width * height;

}

int fs_open(const char *pathname, int flags, int mode) {
    // Log("searching for %s", pathname);
    for ( int i = 0; i < FILENUM; i += 1 )
    {
        // Log("scaning %dth %s\n", i, file_table[i].name);
        if ( strcmp(file_table[i].name, pathname) == 0 )
        {
            return i;
        }
    }
    Log("unkown filename %s", pathname);
    Assert(false ,"unkown filename %s", pathname);
}

int fs_close(int fd) {
    file_table[fd].open_offset = 0;
    return 0;
}

size_t fs_read(int fd, void *buf, size_t len) {
    Assert((fd < FILENUM) && (fd != -1), "%d is not in file_table", fd);

    size_t end_point = file_table[fd].open_offset + len;
    size_t file_end  =  file_table[fd].size;
    size_t read_length = len;
    if ( ( file_table[fd].read == ramdisk_read ) && (end_point > file_end) ) {
        // Log("%s's open_offset: %p exceed the fileend: %p, read only the last %p bytes", file_table[fd].name, file_table[fd].open_offset + len, file_end, file_end - file_table[fd].open_offset);
        read_length = file_end - file_table[fd].open_offset;
    }

    // Log("%s read at %p size: %p read_length: %p", file_table[fd].name, file_table[fd].open_offset, file_table[fd].size, read_length);
    // Assert()
    int ret = file_table[fd].read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, read_length);

    if ( ret == -1 ) {
        Log("ret == -1");
        return -1;
    }
    file_table[fd].open_offset += read_length;
    return ret;
}

size_t fs_write(int fd, void *buf, size_t len) {
    Assert(fd < FILENUM, "%d is not in file_table", fd);

    if ( file_table[fd].write == NULL ) file_table[fd].write = serial_write;

    // size_t end_point = file_table[fd].open_offset + len;
    // size_t file_end  =  file_table[fd].size;

    // Assert( (file_table[fd].write == serial_write) && (end_point <= file_end), "bad%c", 'c');

    int ret = file_table[fd].write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);

    if ( ret == -1 ) {
        // Log("%s's offset = %d", file_table[fd].name, file_table[fd].open_offset);
        file_table[fd].open_offset += len;
        return -1;
    }
    file_table[fd].open_offset += len;
    // Log("%s's offset = %d", file_table[fd].name, file_table[fd].open_offset);
    return ret;
}

size_t fs_leek(int fd, size_t offset, int whence) {
   /* If whence is SEEK_SET, the file offset shall be set to offset bytes.
    *  If whence is SEEK_CUR, the file offset shall be set to its current location plus offset.
    *  If whence is SEEK_END, the file offset shall be set to the size of the file plus offset.
    */
    Assert(fd < FILENUM && fd != -1, "%d is not in file_table", fd);
    switch (whence)
    {
        case SEEK_SET:
            if ( offset < 0 ) return -1;
            // Log("SEEK_SET");
            file_table[fd].open_offset = offset;
            break;
        case SEEK_CUR:
            // Log("SEEK_CUR");
            file_table[fd].open_offset += offset; break;
        case SEEK_END:
            // Log("SEEK_END");
            file_table[fd].open_offset += file_table[fd].size + offset; break;
    }
    // Log("%s's offset = %d, file_table[%d].open_offset = %d, filesize = %d", fd_to_name(fd), (void *)offset, fd, (u32 *)file_table[fd].open_offset, (void *)file_table[fd].size);
    return file_table[fd].open_offset;
}

char *fd_to_name(int fd) {
    if ( fd < 0 || fd >= FILENUM ) {
        return  "fd overflow";
    }
    return file_table[fd].name;
}
