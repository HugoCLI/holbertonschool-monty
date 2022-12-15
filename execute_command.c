#include "monty.h"
/**
 * execute_command - a function that execute commands
 * @command: commands
 * @value: value
 *
 * Return: Nothing.
 */
int execute_command(char *command, char *value)
{
	if (!command || strlen(command) < 1)
		return (0);

	if (strcmp(command, "push") == 0)
	{
		if (!value || atoi(value) == 0)
			return (2);
		return (push_command(atoi(value)));
	}
	if (strcmp(command, "pall")  == 0)
		return (pall_command());

	if (strcmp(command, "pint")  == 0)
		return (pint_command());

	if (strcmp(command, "pop")  == 0)
		return (pop_command());

	return (5);
}
