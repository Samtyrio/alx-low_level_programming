#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: parameter
 */

void print_square(int size)
{
	int up, right;

	if (size > 0)
	{
		for (up = 0; up < size; up++)
		{
			for (right = 0; right < size; right++)
				_putchar('#');

			if (up == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
