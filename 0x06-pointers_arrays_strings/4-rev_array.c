#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: an array of integers
 * @n: number of elements
 *
 * Return: whatever is needed
 */

void reverse_array(int *a, int n)
{
	int b, d;

	for (b = 0; b < n--; b++)
	{
		d = a[b];
		a[b] = a[n];
		a[n] = d;
	}
}
