#include "shell.h"

/**
 *Beautiful_code - that passes betty checks
 *@betty: code checker
 *Return: void
 */

int main(void)
{
        char input_buffer[100];

        while (1)
        {
                display_prompt();
                user_input(input_buffer, sizeof(input_buffer));
                execute_command(input_buffer);            }                                                 return 0;
}
