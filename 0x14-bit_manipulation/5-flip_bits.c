#include "main.h"

/**
 * flip_bits - flips bits and return number
 * @n: the number
 * @m: another number
 * Return: what is needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res, count = 0;

	res = n ^ m;

	while (res > 0)
	{
		count += res & 1;
		res >>= 1;
	}

	return (count);
}
