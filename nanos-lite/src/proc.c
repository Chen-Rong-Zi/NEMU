#include <proc.h>
#include <fs.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

extern void context_uload(PCB *pcb, const char *filename,  char *const argv[], char *const envp[]);
extern PCB* current;
int execve(const char *filename, char *const argv[], char *const envp[]){
    int i = 0;
    putstr("in execve");
    while ( argv[i] ) {
        putstr(argv[i]);
        putch('\n');
        i++;
    }
    context_uload(current, (char*)filename, argv, envp);
    switch_boot_pcb();
    yield();
    return 0;
}


void init_proc() {
  switch_boot_pcb();

  Log("Initializing processes...");

  // load program here

    switch_boot_pcb();
    context_kload(&pcb[0], hello_fun, "hello_fun: A\n");
    context_kload(&pcb[1], hello_fun, "hello_fun: B\n");
    // context_uload(&pcb[1], "/bin/menu", (char *[]){"--skip", NULL}, (char *[]){"environ", NULL});
    // naive_uload(NULL, "/bin/pal");
    switch_boot_pcb();
}

Context* schedule(Context *prev) {
  return NULL;
}
