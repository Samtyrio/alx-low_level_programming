#include "main.h"

/**
 * print_triangle - Prints a left triangle
 * @size: parameter
 */

void print_triangle(int size)
{
	int content, master;

	if (size > 0)
	{
		for (content = 1; content <= size; content++)
		{
			for (master = size - content; master > 0; master--)
				_putchar(' ');

			for (master = 0; master < content; master++)
				_putchar('#');

			if (content == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
