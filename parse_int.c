#include "monty.h"

/**
* parse_int - a function that execute commands
* @value: value
*
* Return: Nothing.
*/
int parse_int(char *value)
{
	const char *str = "abcdefghijklmnopqrstwxyzABCDEFGHIJKLMNOPQRSTWXYZ";
	int i = 0;

	if (!value)
		return (0);
	for (; str[i]; i++)
		if (strchr(value, str[i]) != NULL)
			return (0);

	return (push_command(atoi(value)));
}
