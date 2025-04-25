# include <elf.h>

# include <cpu/cpu.h>
# include <isa.h>
# include <type.h>

#ifdef CONFIG_FTRACE

# define ShOff     (*AS(buffer + 32, u32*))
# define ShEntSize (*AS(buffer + 46, u16*))
# define ShNum     (*AS(buffer + 48, u16*))

# define Shdr     (buffer + ShOff)

# define ShType(x)  (*AS(Shdr + x * ShEntSize + 4,  u32*))
# define SymOff(x)  (*AS(Shdr + x * ShEntSize + 16, u32*))
# define SymSize(x) (*AS(Shdr + x * ShEntSize + 20, u32*))

# define SymEntSize     (16)
# define SymEntInfo(x)  (*AS(buffer + sym_off + x * SymEntSize + 12, u8*))
# define SymEntName(x)  (*AS(buffer + sym_off + x * SymEntSize + 0, u32*))
# define SymEntValue(x) (*AS(buffer + sym_off + x * SymEntSize + 4, u32*))
# define SymStSize(x)   (*AS(buffer + sym_off + x * SymEntSize + 8, u32*))


# define StrOff(x)  (*AS(Shdr + x * ShEntSize + 16, u32*))
# define StrSize(x) (*AS(Shdr + x * ShEntSize + 20, u32*))

enum JType {
    CALL = 0,
    RET = 0,
};

// typedef struct {
//    uint32_t   sh_name;
//    uint32_t   sh_type;
//    uint32_t   sh_flags;
//    Elf32_Addr sh_addr;
//    Elf32_Off  sh_offset;
//    uint32_t   sh_size;
//    uint32_t   sh_link;
//    uint32_t   sh_info;
//    uint32_t   sh_addralign;
//    uint32_t   sh_entsize;
// } Elf32_Shdr;


// typedef struct {
//    unsigned char e_ident[EI_NIDENT];    0
//    uint16_t      e_type;                16
//    uint16_t      e_machine;             18
//    uint32_t      e_version;             22
//    ElfN_Addr     e_entry;               26
//    ElfN_Off      e_phoff;               30
//    ElfN_Off      e_shoff;               34
//    uint32_t      e_flags;               38
//    uint16_t      e_ehsize;              40
//    uint16_t      e_phentsize;           42
//    uint16_t      e_phnum;               44
//    uint16_t      e_shentsize;           46
//    uint16_t      e_shnum;               48
//    uint16_t      e_shstrndx;            50
// } ElfN_Ehdr;


extern char *elf_file;

static u32 sym_num      = 0;
static u32 str_off      = 0;
static u32 str_size     = 0;
static u32 sym_off      = 0;
// static u32 sym_size     = 0;
static u32 sym_ent_size = 0x10;

static int load_elf_or_not = 0;
static int times = 0;
static char *default_func_name = "func";
static char *FILE_NOT_FOUND    = "can not open elf_file";
static char *ARG_NOT_FOUND     = "elf_file is not provided by user!";
static char *MEMORY_ALLOC_ERR  = "memory allocation fails";
static char *READ_FILE_ERROR   = "read elf file fails";
static char *buffer;

int ftrace_load_elf(ErrMsgAddr) {
    if (elf_file == NULL)
        Unwrap_err_or(ARG_NOT_FOUND, 1);

    FILE *fp = fopen(elf_file, "rb");
    if ( fp == NULL )
        Unwrap_err_or(FILE_NOT_FOUND, 1);

    // set to end to calc size
    fseek(fp, 0, SEEK_END);
    long size_elf = ftell(fp);

    Log("The function trace file is %s, size = %ld", elf_file, size_elf);

    // set to head to read
    fseek(fp, 0, SEEK_SET);

    buffer = malloc(size_elf + 1);
    if ( !buffer ) {
        fclose(fp);
        Unwrap_err_or(MEMORY_ALLOC_ERR, 1);
    }

    int bytes_num = fread(buffer, 1, size_elf, fp);
    Log("bytes_num = %d", bytes_num);
    if ( bytes_num != size_elf ) {
        fclose(fp);
        free(buffer);
        Unwrap_err_or(READ_FILE_ERROR, 1);
    }

    fclose(fp);

    Log("ShEntSize = %d", ShEntSize);
    Log("shoff = %d", ShOff);
    // enum{SHT_SYMTAB = 2, SHT_STRTAB}; // <++>
    for ( int i = 0; i < ShNum; i += 1 )
    {
        Log("ShType(i) = %d, SHT_SYMTAB = %d\n", ShType(i), SHT_SYMTAB);
        if ( ShType(i) == SHT_SYMTAB )
        {
            sym_off = SymOff(i);
            sym_num = SymSize(i) / sym_ent_size;
           //printf("SYM_off = %x\n", SYM_off);
        }
        else if ( ShType(i) == SHT_STRTAB )
        {
           str_off = StrOff(i);
           str_size = StrSize(i);
           break;
        }
    }
    return 0;
}

char *find_func(u32 addr, int call_or_ret, ErrMsgAddr) {
    for ( int i = 0; i < sym_num; i += 1 )
    {
        if ( ELF32_ST_TYPE(SymEntInfo(i)) != STT_FUNC )
            continue;
        char *st_name  = SymEntName(i) + buffer + str_off;
        int st_value = SymEntValue(i);
        int st_size  = SymStSize(i);
        if ( addr >= st_value && addr < st_value + st_size )
        {
            char *name = malloc(strlen(st_name) + 1);
            strcpy(name, st_name);
            return name;
        }
    }
    return default_func_name;
}

void ftrace_print(u32 addr, int call_or_ret)
{
    if ( load_elf_or_not == 0 )
    {
        ErrMsg(msg);
        ftrace_load_elf(&msg);
        if ( msg == FILE_NOT_FOUND ) {
            Log("%s Not Found In File System", elf_file);
        }
        else if ( msg == ARG_NOT_FOUND ) {
            Log("args elf_file Not Found, please use --elf-file");
        }
        load_elf_or_not = 1;
    }

    ErrMsg(parse_msg)
    char *name = find_func(addr, call_or_ret, &parse_msg);

    for ( int i = 0; i < times * 2; i += 1 )
        printf(" ");

    if ( call_or_ret == CALL )
    {
        printf("call [%s@"FMT_PADDR"]\n", name, addr);
        times += 1;
    }
    else
    {
        printf("ret [%s]\n", name);
        times -= 1;
    }

    // deallocate name
    if ( name != default_func_name ) {
        free(name);
    }
}
#else
void ftrace_print(u32 addr, int call_or_ret) {
    // pass
}
#endif
