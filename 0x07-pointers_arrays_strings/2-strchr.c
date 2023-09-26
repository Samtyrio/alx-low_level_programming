#include "main.h"

/**
 * _strchr - checks string
 * @s: parameter
 * @c: parameter
 * Return: what is needed
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
