#include "monty.h"

/**
 * mul_command - a function that execute commands
 *
 * Return: Nothing.
 */
int div_command(void)
{
	int sum = 0;
	stack_t *seek = array;
	stack_t *cache;

	if (!array || !array->next)
		return (6);

        if (seek->n > seek->next->n)
                sum = seek->n / seek->next->n;
        else
                sum = seek->next->n / seek->next->n;

	cache = seek->next->next;

	free(array->next);
	free(array);
	array = cache;
	push_command(sum);
	return (1);

}