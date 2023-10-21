#include "shell.h"

/**
 *pr_print - function to display writeups
 *@content: characters to display
 *Return: 1 on success, -1 on error
 */

void printpr(const char *content)
{
		write(1, content, strlen(content));
}
