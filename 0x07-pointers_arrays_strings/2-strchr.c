#include "main.h"

/**
 * _strchr - checks string
 * @s: parameter
 * @c: parameter
 * Return: what is needed
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
		n++;
	}
	return (0);
}
