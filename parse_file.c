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
        char *cmd, av[1024];
        int i = 0;

	size_t len;

        while (getline(&line, &len, *file) > 0)
        {
                printf("[%li] %s", strlen(line), line);
                cmd = strtok(line, " ");
                while (cmd != NULL)
                {
                        if (strlen(cmd) > 0)
                        {
                                av[i++] = cmd;
                                printf("%s\n",token);
                        }

                        cmd = strtok(NULL, " ");
                }
        }

        

}