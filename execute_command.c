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
	if (strcmp(command, "push") == 0)
		return (parse_int(value));
	if (strcmp(command, "pall") == 0)
		return (pall_command());
	if (strcmp(command, "pint") == 0)
		return (pint_command());
	if (strcmp(command, "pop") == 0)
		return (pop_command());
	if (strcmp(command, "swap") == 0)
		return (swap_command());
	if (strcmp(command, "nop") == 0)
		return (0);
	if (strcmp(command, "add") == 0)
		return (add_command());
	if (strcmp(command, "sub") == 0)
		return (sub_command());
	if (strcmp(command, "mul") == 0)
		return (mul_command());
	if (strcmp(command, "div") == 0)
		return (div_command());
	if (strcmp(command, "mod") == 0)
		return (mod_command());
	if (strcmp(command, "pchar") == 0)
		return (pchar_command());
	if (strncmp(command, "#", 1) == 0)
		return (0);
	return (5);
}
