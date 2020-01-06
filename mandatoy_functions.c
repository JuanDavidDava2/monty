#include "monty.h"
/**
 * execute_push - execute push
 * @head: is a double pointer.
 * @cont: is a int
 * Return: Void
 */
void execute_push(stack_t **head, unsigned int cont)
{
	stack_t *stack;

	stack = malloc(sizeof(stack_t));
	if (stack == NULL)
	{
		fprintf(stderr, "USAGE: monty file\n");
		frees(stack);
		exit(EXIT_FAILURE);
	}
	if (!glo.num && glo.num != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", cont);
		frees((*head));
		free(stack);
		exit(EXIT_FAILURE);
	}
	if (glo.num)
	{
		stack->n = atoi(glo.num);
		stack->next = *head;
		stack->prev = NULL;
		if (*head)
			(*head)->prev = stack;
		*head = stack;
	}
	else
	{
		fprintf(stderr, "L%u: usage: push integer\n", cont);
		frees((*head));
		free(stack);
		exit(EXIT_FAILURE); }
}


/**
 *  execute_pall - execute pall
 * @head : is a double pointer
 * @cont: cont.
 * Return: void.
 */
void execute_pall(stack_t **head, unsigned int cont)
{
	stack_t *tmp;
	(void) cont;

	tmp = *head;
	for (; tmp; tmp = tmp->next)
		printf("%d\n", tmp->n);
}

/**
 * execute_pint - print.
 * @stack: element at the top of the stack (head)
 * @n: int value in the structure
 * Return: void
 */
void execute_pint(stack_t **stack, unsigned int n)
{
	stack_t *aux = *stack;

	if (!aux)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", n);
		frees(*stack);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", aux->n);
}
/**
 * execute_pop - remove the first elemnt of the stack
 * @stack: The stack
 * @n: The current file line number
 * Return: Nothing or EXIT_FAILURE
 */
void execute_pop(stack_t **stack, unsigned int n)
{
	stack_t *aux;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", n);
		frees(*stack);
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	aux = aux->next;
	free(*stack);
	*stack = aux;
}


void execute_nop(stack_t **head, unsigned int cont)
{
        (void) head;
        (void) cont;
}