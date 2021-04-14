#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#include "threads/interrupt.h"
#include "userprog/process.h"

//Begin Project 2 code
#define STDIN 0
#define STDOUT 1
#define STDERR 2

void syscall_init (void);
bool check_validate(void *addr);
void sys_exit(int , struct intr_frame * UNUSED);
//End Project 2 code

#endif /* userprog/syscall.h */
