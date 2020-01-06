#include"monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @stack: element in stack
 * @n: integer.
 */
void swap(stack_t **stack, unsigned int n)
{
	stack_t temp;

	if (*stack || (*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	 temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
/**
 * add - adds the top two elements of the stack.
 * @stack: elements in stack.
 * @n: integer.
 * :
 */
