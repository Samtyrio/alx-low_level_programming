#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: what is needed
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
