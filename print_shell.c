#include "shell.h"
/* this is the print function
 * this is going to print 
 * all the messages to STDOUT
 * "strlen" function calculates the lenght 
 * ofthe string
 */

void shell_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
