#include "header.h"
/**
 * execute_command - a function that execute commands
 * @commands: commands
 * @filename: filename
 *
 * Return: Nothing.
 */
void parse_file(FILE **file)
{
        char *line = NULL;
	size_t len;

        while (getline(&line, &len, *file) > 0)
        {
                printf("[%li] %s", strlen(line), line);
        }
}