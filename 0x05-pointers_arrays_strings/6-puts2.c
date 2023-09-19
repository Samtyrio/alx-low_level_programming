#include "main.h"

/**
 * puts2 - uses puts to print
 * @str: to be printed
 */

void puts2(char *str)
{
	int length = 0;
	int rm = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	rm = length - 1;
	for (i = 0 ; i <= rm ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
