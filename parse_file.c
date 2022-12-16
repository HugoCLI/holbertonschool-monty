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
<<<<<<< HEAD
		error(l, statuscode, command);
=======
		if (statuscode == 2)
			dprintf(STDERR_FILENO, "L%i: usage: push integer\n", l);
		else if (statuscode == 3)
			dprintf(STDERR_FILENO, "L%i: can't pint, stack empty\n", l);
		else if (statuscode == 4)
			dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", l);
                else if (statuscode == 5)
			dprintf(STDERR_FILENO, "L%i: unknown instruction %s\n", l, command);
                else if (statuscode == 6)
			dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", l);
                else if (statuscode == 7)
			dprintf(STDERR_FILENO, "L%i: can't swap, stack too short\n", l);
                        
                if (statuscode > 1)
                {
                        free(line);
			return (EXIT_FAILURE);
                }
>>>>>>> 1e002f8760b4c42271c24fec0f659ad480cde8a8
		
	}
        free(line);
	return (0);
}
