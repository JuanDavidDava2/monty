#include "monty.h"
/**
 * pint_stack -print.
 * Description: Function that print the valueat top of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void pint(stack_t **stack, unsigned int n)
{
	stack_t *aux = *top;

	if (aux)
		printf("%d\n", aux->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", n)
		exit(EXIT_FAILURE);
	}
}
/**
 * pop - remove the first elemnt of the stack
 * @stack: The stack
 * @n: The current file line number
 * Return: Nothing or EXIT_FAILURE
 */
void pop(stack_t *stack, unsigned int n)
{
	stack_t *aux;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", n);
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	aux = new->next;
	free(*stack);
	*stack = new;
}
