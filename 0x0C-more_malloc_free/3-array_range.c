#include "main.h"

/**
 * array_range - creator
 * @min: min
 * @max: max
 * Return: what is needed
 */

int *array_range(int min, int max)
{
	int *me;
	int i;

	if (min > max)
		return (NULL);

	me = malloc(sizeof(*me) * ((max - min) + 1));

	if (me == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		me[i] = min;

	return (me);
}
