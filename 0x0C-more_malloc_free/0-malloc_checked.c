#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: parameter
 * Return: what is needed
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	if (b == 0)
		exit(98);

	a = malloc(b);
	if (!a)
		exit(98);

	return (a);
}
