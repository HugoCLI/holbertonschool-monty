#include "monty.h"

/**
* push_command - a function that execute commands
* @value: value
*
* Return: Nothing.
*/
int push_command(int value)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == 0)
	{
		free(new);
		return (0);
	}
	new->prev = NULL;
	new->next = NULL;
	new->n = value;
	if (array)
		new->next = array;
	array = new;
	return (1);
}


/**
 * pall_command - a function that execute commands
 *
 * Return: Nothing.
 */
int pall_command(void)
{
	stack_t *cache;

	if (array == NULL)
		return (0);

	cache = array;

	while (cache)
	{
		printf("%i\n", cache->n);
		cache = cache->next;
	}
	return (1);
}

/**
 * pint_command - a function that execute commands
 *
 * Return: Nothing.
 */
int pint_command(void)
{
	if (array == NULL)
		return (3);
	printf("%i\n", array->n);
	return (1);
}

/**
 * pop_command - a function that execute commands
 *
 * Return: Nothing.
 */
int pop_command(void)
{
	stack_t *new_head;

	if (array == NULL)
		return (4);

	if (!array->next)
	{
		free(array);
		array = NULL;
		return (1);
	}
	new_head = array->next;
	free(array);
	array = new_head;
	return (1);
}
