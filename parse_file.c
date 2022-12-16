#include "monty.h"

/**
 * parse_file - a function that execute commands
 * @file: FILE
 *
 * Return: Nothing.
 */
int parse_file(FILE **file)
{
	char *line = NULL;
	char *token = NULL;
	char *command = NULL;
	int statuscode = 0;
	int l = 0;
	size_t len;

	while (getline(&line, &len, *file) > 0)
	{
		command = strtok(line, " \t\n\r");
                l++;

		if (!command)
			continue;

		token = strtok(NULL, " \t\n\r");
                while (token && strlen(token) == 0)
                        token = strtok(NULL, " \t\n\r");

                if (!command || strlen(command) <= 1)
                        continue;
		statuscode = execute_command(command, token);
		error(l, statuscode, command);
                if (statuscode > 1)
                {
                        free(line);
			return (EXIT_FAILURE);
                }
		
	}
        free(line);
	return (0);
}
