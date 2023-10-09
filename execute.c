#include "shell.h"

void executes_commands(const char *input)
{
	pid_t child_pid = fork();
	/*
	 * create a child
	 * process
	 */

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/*
		 * chid process
		 */
		exclp(input, input, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
