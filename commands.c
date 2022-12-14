#include "header.h"

/**
 * push_command - a function that execute commands
 * @av: arguments
 *
 * Return: Nothing.
 */
int push_command(char *av[])
{
        (void)av;
        return (1);
}


/**
 * pall_command - a function that execute commands
 *
 * Return: Nothing.
 */
int pall_command(void)
{
        stack_t *cache = array;
        while (cache)
        {
                printf("%i", cache->n);
                cache = cache->next;
        }
        return (0);
}