#include "header.h"
/**
 * execute_command - a function that execute commands
 * @commands: commands
 * @filename: filename
 *
 * Return: Nothing.
 */
int execute_command(char *command, char *av[])
{
        if (strcmp(command, "push"))
                return push_command(av);
        if (strcmp(command, "pall"))
                return pall_command();
        
        return (0);
}