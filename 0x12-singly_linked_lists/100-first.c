#include <stdio.h>

/**
 * first_print - function executed before main
 * Return: what is needed
 */

void __attribute__ ((constructor)) first_print()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
