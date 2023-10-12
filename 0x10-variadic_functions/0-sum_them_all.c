#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers
 * @n: size
 * Return: what is needed
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;

	va_list sum_all;

	va_start(sum_all, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);

		result += va_arg(sum_all, int);
	}

	va_end(sum_all);
	return (result);
}
