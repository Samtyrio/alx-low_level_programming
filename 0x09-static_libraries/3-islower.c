#include "main.h"

/**
 * _islower - checks lowercase
 * @c: the character to be checked
 * Return: 1 if there ia a lowercase character else otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
