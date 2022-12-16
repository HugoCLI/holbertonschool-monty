#include "monty.h"
/**
* error_message - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @err: int parmameter
* @line: int parmameter
* @cmd: pointer char
*/
int error_message(int line, int err, char *cmd)
{
	if (err == 2)
		dprintf(STDERR_FILENO, "L%i: usage: push integer\n", line);
	else if (err == 3)
		dprintf(STDERR_FILENO, "L%i: can't pint, stack empty\n", line);
	else if (err == 4)
		dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", line);
	else if (err == 5)
		dprintf(STDERR_FILENO, "L%i: unknown instruction %s\n", line, cmd);
	else if (err == 6)
		dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", line);
	else if (err == 7)
		dprintf(STDERR_FILENO, "L%i: can't swap, stack too short\n", line);
	else if (err == 8)
		dprintf(STDERR_FILENO, "L%i: can't add, stack too short\n", line);
	else if (err == 9)
		dprintf(STDERR_FILENO, "L%i: can't sub, stack too short\n", line);
	return (0);
}

