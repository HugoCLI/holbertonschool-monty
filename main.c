#include "header.h"
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 *
 * Return: Shell.
 */

int main(int argc, char *argv[])
{
	char *arguments[1024] = {NULL};
	int file;
	(void)argc;

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	return (0);
}
