#include"monty.h"
/**
 * execute_swap - swaps the top two elements of the stack.
 * @stack: element in stack
 * @n: integer.
 */
void execute_swap(stack_t **stack, unsigned int n)
{
	int temp;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
/**
 * execute_add - adds the top two elements of the stack.
 * @head: elements in stack.
 * @n: integer.
 */
void execute_add(stack_t **head, unsigned int n)
{
	stack_t *aux = *head;

	if (!aux || !aux->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = (*head)->next;
		(*head)->n += aux->n;
		(*head)->prev = NULL;
		free(aux);
	}
}
