#include <stdio.h>

/**
 *  main - This program uses char
 *  Description - This program Print all the letters except q and e
 *  Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
