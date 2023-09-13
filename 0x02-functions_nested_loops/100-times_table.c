#include "main.h"

void add_format(int p);
void print_product(int p);

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: upper bound number to print up to.
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			print_product(p);
			if (j == n)
				continue;
			p = i * (j + 1);
			add_format(p);
		}
		_putchar('\n');
	}
}

/**
 * add_format - uses putchar
 * @p: good job
 */

void add_format(int p)
{
	_putchar(',');
	_putchar(' ');
	if (!(p >= 10))
		_putchar(' ');
	if (!(p >= 100))
		_putchar(' ');
}

/**
 * print_product - prints product
 * @p: a good kid
 */

void print_product(int p)
{
	if (p > 99)
	{
		_putchar((p / 100) + '0');
		_putchar((p / 10 % 10) + '0');
		_putchar((p % 10) + '0');
	}
	else if (p > 9)
	{
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
	}
	else
		_putchar((p % 10) + '0');
}
