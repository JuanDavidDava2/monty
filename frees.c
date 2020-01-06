#include "monty.h"
/**
 *frees - free.
 * @head: Head of the list.
 * Return: Void.
 */
void frees(stack_t *head)
{
	stack_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
	fclose(glo.file);
	free(glo.buff);

}
