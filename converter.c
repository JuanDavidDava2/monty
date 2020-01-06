#include "monty.h"
/**
 * converter - read the monty files
 * @buff: is a pointer
 * @h: is a double pointer 
 * @cont: is a int
 * Return: Void.
 */

void converter(char *buff, stack_t **head, unsigned int cont)
{
	char *str, *tok;

	str = strtok(buff, " \n\t");
	tok = strtok(NULL, " \n\t");
	glo.num = tok;
	if (str && str[0] != '#')
		redirect_function(head, cont, str);
}