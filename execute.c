#include "shell.h"

void executes_commands(const char *input)
{
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
		 * child process
		 */
		execlp(input, input, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	{
		wait (NULL);
		
/*
 * TOKENIZATION
 * tokenize the arguments
 * anywhere the program encounters a space
 * " " it should break it down and 
 * take it as another argument
 *
 */
	}
	{
		pid_t child_pid = fork();
		if (child_pid == -1)
	{
		shell_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/*
		 * child process
		 * parse the command then it's arguments
		 * takes a maximum of 120 arguments
		 */
		char *args[120];
		int arg_count = 0;

		char *token = strtok((char *)input, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

		/*
		 * executes the 
		 * command
		 */
		execvp(args[0], args);
		/*
		 * if execvp fails
		 * prin an error message
		 */
		shell_print("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
	}
}
}
