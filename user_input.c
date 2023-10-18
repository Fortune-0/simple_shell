#include "shell.h"

/**
 *Parseing - read command from the user
 *@fgets: method
 *Return: void
 */

void user_input(char *input_buffer, size_t size)
{
	if (fgets(input_buffer, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printpr("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
	input_buffer[strcspn(input_buffer, "\n")] = '\0';
}
