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

	size_t len;

        while (getline(&line, &len, *file) > 0)
        {
                command = strtok(line, " ");
                token = strtok(line, " ");
                while (token != NULL)
                {
                        if (strlen(token) > 0)
                        {
                                av[i] = token;
                                i++;
                        }

                        token = strtok(NULL, " ");
                }
                execute_command(command, av);
                for (i = 0; av[i]; i++)
                        av[i] = NULL;
                
        }
        return (0);
        

}