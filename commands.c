#include "monty.h"

stack_t *array;

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
                return (-3);
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
		return (-3);
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
                return (6);
        
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
                return (7);

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
                return (8);

        sum += seek->n;
        sum += seek->next->n;
        cache = seek->next->next;

        
        free(array->next);
        free(array);
        array = cache;
        push_command(sum);
        
        return (1);
}

