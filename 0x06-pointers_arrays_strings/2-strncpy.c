#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: receiver
 * @src: giver
 * @n: middle man
 *
 * Return: whatever needs to be returned
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
