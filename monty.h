#ifndef MONTY
#define MONTY

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global - global variables
 * @num: is a pointer
 * @buff: is a pointer
 * @file: is a pointer
 *
 * Description: global functions
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct global
{
	char *num;
	char *buff;
	FILE *file;
} gl;

extern gl glo;

void converter(char *buff, stack_t **head, unsigned int cont);
void redirect_function(stack_t **head, unsigned int cont, char *instruction);
void execute_push(stack_t **head, unsigned int cont);
void free_stack(stack_t *head);
void execute_pall(stack_t **head, unsigned int cont);
void execute_pop(stack_t *stack, unsigned int n);
void execute_pint(stack_t **stack, unsigned int n);
#endif
