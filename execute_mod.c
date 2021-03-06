#include "monty.h"
/**
 * execute_mod - adds the top two elements of the stack.
 * @head: elements in stack.
 * @n: integer.
 */
void execute_mod(stack_t **head, unsigned int n)
{
	stack_t *aux = *head;

	if (!aux || !aux->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	else if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", n);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = (*head)->next;
		(*head)->n %= aux->n;
		(*head)->prev = NULL;
		free(aux);
	}
}
