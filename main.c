#include "monty.h"
gl glo = {NULL, NULL, NULL};
/**
 *main - is a main
 *@argc: is a int
 *@argv: is a double pointer
 *Return: 0
 */
int main(int argc, char **argv)
{
	int cont = 0;
	stack_t *head = NULL;
	ssize_t line;
	size_t bufsize = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	glo.file = fopen(argv[1], "r");
	if (!glo.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&glo.buff, &bufsize, glo.file)) != EOF)
	{
		cont++;
		converter(glo.buff, &head, cont);
	}
	free_stack(head);
	exit(EXIT_SUCCESS);
}
