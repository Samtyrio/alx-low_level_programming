#include <stdio.h>
#include <stdlib.h>

/**
 * main - master function
 * @argc: number man
 * @argv: character man
 * Return: what is needed
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
