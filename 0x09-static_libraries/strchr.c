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

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
	}
	return (0);
}
