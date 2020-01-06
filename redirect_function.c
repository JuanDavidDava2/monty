#include "monty.h"
/**
 * redirect_function - Funtion.
 * @instruction: is a pointer.
 * @head: is a doble pointer.
 * @cont: is a int.
 */
void redirect_function(stack_t **head, unsigned int cont, char *instruction)
{
        int i = 0;

	instruction_t op[] = {
		{"push", execute_push},
		{"pall", execute_pall},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if ((strcmp(op[i].opcode, instruction)) == 0)
		{
			op[i].f(head, cont);
			break;
		}
		i++;
	}
	if (op[i].f == NULL)
	{
                fprintf(stderr, "L%d: unknown instruction %s\n", cont, instruction);
		exit(EXIT_FAILURE);
	}
}