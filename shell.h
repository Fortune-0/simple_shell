#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include "error.h"
void executes_commands(const char *input);
void start_info(void);
void read_command(char *input, size_t size);
void shell_print(const char *message);
#endif /* SHELL_H */
