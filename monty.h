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
int error_message (int line, int err, char *cmd);
int parse_int(char *value);

int push_command(int value);
int pall_command(void);
int pint_command(void);
int pop_command(void);


int swap_command(void);
int add_command(void);
int swap_command(void);
int add_command(void);
int sub_command(void);
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


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        int (*f)(void);
} instruction_t;



stack_t *array;
extern stack_t *array;

#endif
