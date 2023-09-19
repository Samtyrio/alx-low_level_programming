#include "main.h"

/**
 * swap_int - this program love to swap
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;

}
