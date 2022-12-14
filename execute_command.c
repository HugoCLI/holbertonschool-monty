#include "header.h"
/**
 * execute_command - a function that execute commands
 * @commands: commands
 * @filename: filename
 *
 * Return: Nothing.
 */
int execute_command(char *command, char *value)
{
        if (strcmp(command, "push"))
        {
                if (atoi(value) == 0)
                        return (2);
                return push_command(atoi(value));
        }
        if (strcmp(command, "pall"))
                return pall_command();
        
        return (0);
}