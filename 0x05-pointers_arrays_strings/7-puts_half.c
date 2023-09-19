#include "main.h"

/**
 * puts_half - cut em into two
 * @str: i am a string
 */

void puts_half(char *str)
{
	int a, n, stretch;

	stretch = 0;

	for (a = 0; str[a] != '\0'; a++)
		stretch++;
	n = (stretch / 2);
	if ((stretch % 2) == 1)
		n = ((stretch + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
