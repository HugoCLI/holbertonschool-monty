#include "header.h"
/**
 * execute_command - a function that execute commands
 * @commands: commands
 * @filename: filename
 *
 * Return: Nothing.
 */
int parse_file(FILE **file)
{
        char *line = NULL;
        char *token, *av[1024];
        char *command = NULL;
        int i = 0;
        int statuscode = 0;
        int l = 0;
	size_t len;

        while (getline(&line, &len, *file) > 0)
        {
                command = strtok(line, " ");
                token = strtok(NULL, " ");
                
                statuscode = execute_command(command, token);

                if (statuscode == 2)
                {
                        dprintf(STDERR_FILENO, "L%i: usage: push integer\n", l);
                        return (0);
                }
                l++;

                for (i = 0; av[i]; i++)
                        av[i] = NULL;
                
        }
        return (0);
        

}