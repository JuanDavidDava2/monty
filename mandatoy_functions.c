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
		free_stack(stack);
		exit(EXIT_FAILURE); 
        }
	if (!glo.num && glo.num != 0)
	{
                fprintf(stderr, "L%u: usage: push integer\n", cont);
		free_stack((*head));
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
		free_stack((*head));
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