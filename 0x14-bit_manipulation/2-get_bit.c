#include "main.h"

/**
 * get_bit - gets bit value
 * @n: the number
 * @index: counter
 * Return: what is needed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > sizeof(n) * 8)
		return (-1);

	num = (n & (1 << index)) ? 1 : 0;

	return (num);
}
