#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <limits.h>
#include <stddef.h>

/*Handle - file prototypes goes in here*/

void printpr(const char *content);
void display_prompt(void);
void user_input(char *input_buffer, size_t size);
void execute_command(const char *command);

#endif
