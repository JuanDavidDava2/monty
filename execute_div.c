#include "monty.h"
/**
 * execute_div - adds the top two elements of the stack.
 * @head: elements in stack.
 * @n: integer.
 */
void execute_div(stack_t **head, unsigned int n)
{
	stack_t *aux = *head;

	if (!aux || !aux->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
        if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", n);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = (*head)->next;
		(*head)->n /= aux->n;
		(*head)->prev = NULL;
		free(aux);
	}
}