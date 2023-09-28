#include "main.h"

/**
 * _pow_recursion - prints a value of a variable as the power of another
 * @x: the big man variable
 * @y: the one who will be enslaved
 * Return: what is needed
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

