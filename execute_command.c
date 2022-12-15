#include "header.h"
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

	if (strncmp(command, "push", 4) == 0)
	{
		if (!value || atoi(value) == 0)
			return (2);
		return (push_command(atoi(value)));
	}
	if (strncmp(command, "pall", 4)  == 0)
		return (pall_command());

	if (strncmp(command, "pint", 4)  == 0)
		return (pint_command());

	if (strncmp(command, "pop", 3)  == 0)
		return (pop_command());

	return (0);
}
