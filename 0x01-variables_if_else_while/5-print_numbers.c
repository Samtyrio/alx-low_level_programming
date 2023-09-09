#include <stdio.h>

/**
 *  main - This program uses char
 *  Description - This program prints decimal
 *  Return: 0
 */

int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}

