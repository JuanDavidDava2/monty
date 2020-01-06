#include "monty.h"
/**
 * execute_sub - sub the top two elements of the stack.
 * @head: elements in stack.
 * @n: integer.
 */
void execute_sub(stack_t **head, unsigned int n)
{
	stack_t *aux = *head;

	if (!aux || !aux->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = (*head)->next;
		(*head)->n -= aux->n;
		(*head)->prev = NULL;
		free(aux);
	}
}
