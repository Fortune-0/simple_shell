#include "shell.h"

/**
 *Execute_command - Handle prompt commands
 *
 *Return: 0
 */

void execute_command(const char *command)
{
	pid_t c_pid = fork();

    	if (c_pid == -1)
	{
		perror("fork");
        	exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
        /* In the child process */
		int arg_count =0;
		char *args[95];
		char c_path[] = {"/bin/sh"};


		char *token = strtok((char *)command, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

	/*execute the command*/
		execve(c_path, args, NULL);
		perror("execve");
            	exit(EXIT_FAILURE);
    	} 
	else 
	{
        /* In the parent process */
        	wait(NULL);
    	}
}
