#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: what is needed
 */

int get_endianness(void)
{
	int n = 5;
	char *ch = (char *) &n;

	return (*ch);
}
