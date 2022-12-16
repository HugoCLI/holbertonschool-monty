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

        if (seek->n == 0)
                return (7);
                
        sum = seek->next->n / seek->n;

	cache = seek->next->next;

	free(array->next);
	free(array);
	array = cache;
	push_command(sum);
	return (1);

}
