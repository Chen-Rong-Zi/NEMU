#include <common.h>
#include <fs.h>
#include <proc.h>
#include "syscall.h"

extern char etext, edata, end;
typedef struct timeval {
    u32 tv_sec;
#if defined(__LP64__) || defined(_LP64)
    u64 tv_usec;    // 64位机器
#else
    u32 tv_usec;    // 32位机器
#endif
} timeval;

typedef struct timezone {
    u32 tz_minuteswest;
    u32 tz_dsttime;
} timezone;


const int DEBUG = 0;

#define CASE(sysint, ...) case sysint: { \
    __VA_ARGS__;                         \
    strace(sysint, a[1], a[2], a[3]);    \
    break;                                   \
}

static inline void strace(uintptr_t sysint, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3) {

#define STRACE_CASE(int_syscall, fmt, ...) case int_syscall: {\
    Log("%s "fmt, #int_syscall, __VA_ARGS__);\
    break;\
}
    if ( DEBUG )
    switch (sysint)
    {
        STRACE_CASE(SYS_open,  "open %s",                              (char *)arg1);
        STRACE_CASE(SYS_close, "close %s",                              fd_to_name((u32) arg1));
        STRACE_CASE(SYS_read,  "read %d size from %s to %p",           (u32)arg3, fd_to_name((u32)arg1), (void*)arg2);
        STRACE_CASE(SYS_write, "write %d size from %s to %p",          (u32)arg3, fd_to_name((u32)arg1), (void*)arg2);
        STRACE_CASE(SYS_lseek, "%s file pointer offset: %d, mode: %s", fd_to_name((u32) arg1), ((u32)arg2), (arg3 == SEEK_SET) ? "SEEK_SET" :
                    (arg3 == SEEK_CUR) ? "SEEK_CUR" : (arg3 == SEEK_END)? "SEEK_END" : "unkown whence");
        STRACE_CASE(SYS_gettimeofday,  "get gettimeofday %d\n", 1);
        STRACE_CASE(SYS_brk,  "call sys_brk%d", 1);
    }
}

static inline void putd(u32 size) {
    if ( size < 10 ) {
        putch('0' + size);
        return;
    }
    putd(size / 10);
    putch('0' + size % 10);
}

static inline void do_write(Context *c) {
    // putch('s');putch('i');putch('z');putch('e');putch(':'); putd(size); putch(10);
    int    fd  = (int)c->GPR2;
    void  *buf = (void *)c->GPR3;
    size_t len = (size_t)c->GPR4;
    c->GPRx = fs_write(fd, buf, len);
}

static inline void do_brk(Context *c) {
    c->GPRx = 0;
}


static inline void do_open(Context *c) {
    char *pathname = (char *)c->GPR2;
    int flag = (int)c->GPR3;
    int mode = (int)c->GPR4;
    c->GPRx = fs_open(pathname, flag, mode);
}

static inline void do_close(Context *c) {
    int fd = (int)c->GPR2;
    c->GPRx = fs_close(fd);
}

static inline void do_read(Context *c) {
    int fd = (int)c->GPR2;
    void *buf = (void*)c->GPR3;
    size_t len = (int) c->GPR4;
    c->GPRx = fs_read(fd, buf, len);
}

static inline void do_lseek(Context *c) {
    int fd = (int)c->GPR2;
    size_t offset = (size_t) c->GPR3;
    size_t len = (size_t) c->GPR4;
    c->GPRx = fs_leek(fd, offset, len);
}

static inline void do_gettimeofday(Context *c) {
    static AM_TIMER_UPTIME_T uptime;
    ioe_read(AM_TIMER_UPTIME, &uptime);


    timeval *tv = (timeval *)c->GPR2;
    // timezone *zone = (timezone *)c->GPR3;

    tv->tv_sec = (int32_t)uptime.us / 1000000;
    tv->tv_usec = uptime.us;

    // Log("uptime.us = %d, tv->tv_usec = %d, tv->tv_sec = %d tv = %p\n", uptime.us, tv->tv_usec, tv->tv_sec, tv);
    c->GPRx = 0;
}

extern void naive_uload(void *pcb, const char *filename);
extern void context_uload(PCB *pcb, const char *filename,  char *const argv[], char *const envp[]);
extern PCB* current;
extern int execve(const char *filename, char *const argv[], char *const envp[]);
static inline void do_execve(Context *c) {
    putstr("in do_execve\n");
    const char *filename = (char *)c->GPR2;
    char **args = (char **)c->GPR3;
    char **env  = (char **)c->GPR4;
    if ( filename == NULL ) {
        c->GPRx = -1;
        return;
    }
    execve(filename, args, env);
    // putstr(filename);
    // context_uload(current, filename, args, env);
    c->GPRx = 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  switch (a[0]) {
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
