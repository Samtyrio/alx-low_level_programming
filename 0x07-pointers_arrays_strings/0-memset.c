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

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
