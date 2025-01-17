#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  TODO();
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

static inline int count(char *const array[]) {
    int cnt = 0;
    for ( int i = 0; array[i] != NULL; i += 1 )
        cnt += 1;
    return cnt;
}

void context_uload(PCB *pcb, const char *filename,  char *const argv[], char *const envp[]) {
    AddrSpace addr;

    void *entry = (void *)loader(pcb, filename);
    pcb->cp = ucontext(&addr, RANGE(pcb->stack, pcb->stack + STACK_SIZE), entry);

    int argnum = count(argv), envc = count(envp);
    // Log("in context_uload argv = %p, envc = %d, argnum = %d\n", argv, envc, argnum);

    char *argc_init = new_page(8) + STACK_SIZE;
    // char *argc_init = heap.end;
    *argc_init = argnum + 1;    // filename + argc

    char **filename_addr = (char **)argc_init + 1;
    *filename_addr = (char*)filename;

    char **argv_init = (char **)filename_addr + 1;
    for ( int i = 0; i < argnum + 1; i += 1 )
        argv_init[i] = argv[i];

    char **env_init = argv_init + argnum + 1;
    for ( int i = 0; i < envc + 1; i += 1 )
        env_init[i] = envp[i];

    // pcb->cp->GPRx = (uintptr_t)heap.end;
    pcb->cp->GPRx = (uintptr_t)argc_init;
    Dbg(argc_init);
    // pcb->cp->GPR1 = (uintptr_t)argc_init;
    // printf("pcb->cp->GPRx = %p = %d, pcb->cp->gpr1 = %p, %d", (void*)pcb->cp->GPRx, *(char*)pcb->cp->GPRx, (void *)pcb->cp->GPR1, *(char*)pcb->cp->GPR1);
    // printf("heap.start = %p, heap.end = %p, argc_init = %p, pcb->cp->GPRx = %p, env_init = %p\n", heap.start, heap.end, argc_init, (void*)pcb->cp->GPRx, env_init);
}
