#ifndef MAIN
#define MAIN

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int parse_file(FILE **file);
int execute_command(char *command, char *value);
<<<<<<< HEAD
=======
int error_message (int line, int err, char *cmd);

>>>>>>> 02f721226f6dc37d94f47748b92f706e7fe05d9d

int push_command(int value);
int pall_command(void);
int pint_command(void);
int pop_command(void);
<<<<<<< HEAD

int error(int line, int err, char *cmd)

int swap_command(void);
int add_command(void);

=======
int swap_command(void);
int add_command(void);
>>>>>>> 02f721226f6dc37d94f47748b92f706e7fe05d9d
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;



extern stack_t *array;

#endif
