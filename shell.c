#include "shell.h"

int main (void)
{
	char input[120];
	while (true)
	{
		start_info();
		read_command(input, sizeof(input));
		executes_commands(input);
	}
	return 0;
}

