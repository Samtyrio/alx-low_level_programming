#include <stdio.h>

/**
 *  main - betty jooo
 *  Description - checker jooo
 *  Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int num1 = i / 10;
			int num2 = i % 10;
			int num3 = j / 10;
			int num4 = j % 10;

			putchar('0' + num1);
			putchar('0' + num2);
			putchar(' ');
			putchar('0' + num3);
			putchar('0' + num4);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
