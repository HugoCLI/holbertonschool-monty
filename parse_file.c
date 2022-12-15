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
	int l = 1;
	size_t len;

	while (getline(&line, &len, *file) > 0)
	{
		command = strtok(line, " ");

		if (!command)
			return (EXIT_FAILURE);

		token = strtok(NULL, " ");
		statuscode = execute_command(command, token);
		if (statuscode == 2)
		{
                        free(line);
			dprintf(STDERR_FILENO, "L%i: usage: push integer\n", l);
			return (EXIT_FAILURE);
		}
		else if (statuscode == 3)
		{
                        free(line);
			dprintf(STDERR_FILENO, "L%i: can't pint, stack empty\n", l);
			return (EXIT_FAILURE);
		}
		else if (statuscode == 4)
		{
                        free(line);
			dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", l);
			return (EXIT_FAILURE);
                }
                else if (statuscode == 5)
		{
                        free(line);
			dprintf(STDERR_FILENO, "L%i: unknown instruction %s\n", l, command);
			return (EXIT_FAILURE);
		}
		l++;
	}
        free(line);
	return (0);
}
