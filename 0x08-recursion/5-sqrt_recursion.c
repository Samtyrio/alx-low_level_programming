#include "main.h"

/**
 * cal_sqrt - recursively calculates the square root of n
 * @n: the number for which to calculate the square root
 * @guess: the current guess for the square root
 * Return: the square root of n, or -1 if not found
 */
int cal_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (cal_sqrt(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number in particular
 * Return: what is needed
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (cal_sqrt(n, 1));
	}
}
