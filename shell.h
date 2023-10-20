#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
<<<<<<< HEAD
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
=======
#include <sys/types.h>
#include <limits.h>
#include <stddef.h>

/*Handle - file prototypes goes in here*/

void printpr(const char *content);
void display_prompt(void);
void user_input(char *input_buffer, size_t size);
void execute_command(const char *command);

#endif
>>>>>>> 41bf4075b50e3290e15bbc7ecb8bb141e510c4ec
