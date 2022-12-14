#include "header.h"
stack_t *array;
/**
 * push_command - a function that execute commands
 * @av: arguments
 *
 * Return: Nothing.
 */
  /**
   * push_command - a function that execute commands
   * @av: arguments
   *
   * Return: Nothing.
   */
  
int push_command(int value)
{
        stack_t *new = malloc(sizeof(stack_t));
        if (!new)
                return (-3);
        
        new->n = value;
        new->prev = NULL;
        new->next = array;
        if (array)
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
        
        if (array != NULL)
                return (0);

        
        printf("%i", array->n);
        return (0);
}

int pint_command(void)
{
        if (array != NULL)
                return (3);
                
        printf("%i\n", array->n);
        return (0);
}
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