# include "main.h"

/**
 * print_diagonal - loves diagonal
 * @n: parameter
 */

void print_diagonal(int n)
{
	int me, you;

	if (n > 0)
	{
		for (me = 0; me < n; me++)
		{
			for (you = 0; you < me; you++)
				_putchar(' ');
			_putchar('\\');

			if (me == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
