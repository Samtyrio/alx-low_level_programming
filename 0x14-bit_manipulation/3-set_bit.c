#include "main.h"

/**
 * set_bit - sets value of bits
 * @n: pointer to a string
 * @index: counter
 * Return: what is needed
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int stake = 1 << index;

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= stake;

	return (1);
}
