#include "main.h"

/**
 * _memcpy - copies from one to another
 * @dest: receiver
 * @src: giver
 * @n: no of times to be given
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;

	while (n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (i);
}
