#include "monty.h"
stack_t *array;
/**
 * push_command - a function that execute commands
 * @av: arguments
 *
 * Return: Nothing.
 */
  /**
   * push_command - a function that execute commands
   * @value: value
   *
   * Return: Nothing.
   */
  
int push_command(int value)
{
        stack_t *new = malloc(sizeof(stack_t));
        if (!new)
                return (-3);
        
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

        stack_t *cache = array;

        while (cache)
        {
                 printf("%i\n", cache->n);
                 cache = cache->next;
        }
        
       
        return (0);
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
        return (0);
}

/**
 * pop_command - a function that execute commands
 *
 * Return: Nothing.
 */
int pop_command(void)
{
        if (array != NULL)
                return (4);
        
        if (!array->next)
        {
                free(array);
                return (0);
        }
                
        stack_t *new_head = array->next;
        new_head->prev = NULL;

        free(array);
        array = new_head;
        return (0);
}