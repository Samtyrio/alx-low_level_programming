#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: strings inbetween numbers
 * @n: the size
 * Return: what is needed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator == NULL)
			return;
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
