#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: number to be inputed
 * Return: whatever is needed
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
