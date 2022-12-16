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
	const char *str = "abcdefghijklmnopqrstwxyzABCDEFGHIJKLMNOPQRSTWXYZ";
<<<<<<< HEAD
        int i = 0;

	if (!command || strlen(command) < 1)
		return (0);

	if (strcmp(command, "push") == 0)
	{
		if (!value)
			return (2);
		for (; str[i]; i++)
			if (strchr(value, str[i]) != NULL)
=======
	int i = 0;

	(void) str;
	if (!command || strlen(command) < 1)
		return (0);
	if (strcmp(command, "push") == 0)
	{
		if (!value || strlen(value) < 1)
			return (2);
		for (; str[i]; i++)
			if (strchr(value, str[i]))
>>>>>>> 02f721226f6dc37d94f47748b92f706e7fe05d9d
				return (2);
		i = atoi(value);
		return (push_command(i));
	}
<<<<<<< HEAD
	if (strcmp(command, "pall")  == 0)
		return (pall_command());

	if (strcmp(command, "pint")  == 0)
		return (pint_command());

	if (strcmp(command, "pop")  == 0)
		return (pop_command());

        if (strcmp(command, "swap")  == 0)
		return (swap_command());

        if (strcmp(command, "nop")  == 0)
		return (0);
        
         if (strcmp(command, "add")  == 0)
		return (add_command());

=======
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
>>>>>>> 02f721226f6dc37d94f47748b92f706e7fe05d9d
	return (5);
}
