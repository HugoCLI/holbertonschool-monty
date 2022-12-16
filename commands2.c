#include "monty.h"

/**
 * swap_command - a function that execute commands
 *
 * Return: Nothing.
 */
int swap_command(void)
{
	stack_t *first_stack;
	stack_t *second_stack;

	if (!array || !array->next)
		return (6);

	first_stack = array->next;
	second_stack = array;

	first_stack->prev = NULL;
	second_stack->prev = first_stack;
	second_stack->next = first_stack->next;
	first_stack->next = second_stack;
	array = first_stack;
	return (1);
}

/**
 * add_command - a function that execute commands
 *
 * Return: Nothing.
 */
int add_command(void)
{
	int sum = 0;
	stack_t *seek = array;
	stack_t *cache;

	if (!array || !array->next)
		return (6);

	sum += seek->n;
	sum += seek->next->n;
	cache = seek->next->next;

	free(array->next);
	free(array);
	array = cache;
	push_command(sum);
	return (1);

}

/**
 * sub_command - a function that execute commands
 *
 * Return: Nothing.
 */
int sub_command(void)
{
	int sum = 0;
	stack_t *seek = array;
	stack_t *cache;

	if (!array || !array->next)
		return (6);

	sum -= seek->n;
	sum += seek->next->n;
	cache = seek->next->next;

	free(array->next);
	free(array);
	array = cache;
	push_command(sum);
	return (1);

}
