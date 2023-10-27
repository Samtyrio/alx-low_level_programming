#include "main.h"

/**
 * print_binary - prints binary numbers
 * @n: the number to be converted
 * Return: what is needed
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
