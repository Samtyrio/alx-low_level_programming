#include <stdio.h>

/**
 *  main - This program uses char
 *  Description - program that prints the alphabet in lowercase
 *  Return: 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
