#include "main.h"

/**
 * _memset - fills memory with bytes
 * @s: area to be filled
 * @b: filling tool
 * @n: number of bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	while (n > 0)
	{
		s[y] = b;
		y++;
		n--;
	}

	return (s);
}
