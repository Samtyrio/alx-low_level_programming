#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: reverse
 */

void rev_string(char *s)
{
	char r = s[0];
	int size = 0;
	int i;

	while (s[size] != '\0')
		size++;
	for (i = 0; i < size; i++)
	{
		size--;
		r = s[i];
		s[i] = s[size];
		s[size] = r;
	}
}
