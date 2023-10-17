#include "shell.h"

void read_input(char *input, size_t size)
{
	if (fgets(input, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Error reading inpit.\n");
			exit(EXIT_FAILURE);
		}
	}
	input[strcspn(input, "\n")] = '\0';
}
