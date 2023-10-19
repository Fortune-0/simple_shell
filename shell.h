#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
/* #include "error.h" */
/* exit.c */
void bin_exit(general_t *info, char **arguments);
int number_controller(general_t *info, char *number);
/* execute.c */
void executes_commands(const char *input);

/* start_info.c */

void start_info(void);

/* user-inputs */
void read_command(char *input, size_t size);

/* print_shell.c */
void shell_print(const char *message);
#endif /* SHELL_H */
