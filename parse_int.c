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
		return (2);
	for (; str[i]; i++)
		if (strchr(value, str[i]) != NULL)
			return (2);

	return (push_command(atoi(value)));
}
