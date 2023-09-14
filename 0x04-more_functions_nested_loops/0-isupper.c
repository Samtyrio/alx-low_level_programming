#include "main.h"

/**
 * _isupper - check if c is upper or lower
 * @c: parameter
 * Return: 1 if true else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
