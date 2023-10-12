#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - get_op_func has operators correlated with
 * @argc: arguments counter
 * @argv: caracter arguments
 * Return: what is needed
 */
int main(int argc, char *argv[])
{
	int un, deux, tol;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	un = atoi(argv[1]);
	deux = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	tol = res(un, deux);

	printf("%d\n", tol);
	return (0);
}
