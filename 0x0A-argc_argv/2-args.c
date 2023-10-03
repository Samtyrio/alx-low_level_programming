#include <stdio.h>

/**
 * main - the master function
 * @argc: number man
 * @argv: character man
 * Return: whatever is needed
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
