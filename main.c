#include "monty.h"

stack_t *array;
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 *
 * Return: Shell.
 */

int main(int argc, char *argv[])
{
	FILE *file;
	int error;
	(void)argc;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	
	error = parse_file(&file);
	fclose(file);


	return (error);
}
