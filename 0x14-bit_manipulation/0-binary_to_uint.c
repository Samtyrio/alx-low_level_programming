#include "main.h"

/**
 * binary_to_uint - converts binary numbers to u int
 * @b: the string
 * Return: what is needed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (i < strlen(b))
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res = res << 1;
		res = res + (b[i] - '0');
		i++;
	}

	return (res);
}
