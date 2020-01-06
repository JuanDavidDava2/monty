#include "monty.h"
/**
 *free_stack - free.
 * @head: Head of the list.
 * Return: Void.
 */
void free_stack(stack_t *head)
{
	stack_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
	fclose(glo.file);
	free(glo.buff);

}
