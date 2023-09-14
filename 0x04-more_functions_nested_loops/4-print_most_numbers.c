#include "main.h"

/**
 * print_most_numbers - print 0-9
 * @void: void
 * return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
