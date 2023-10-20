#include "lists.h"

/**
 * list_len - lists length
 * @h: pointer to the first node
 * Return: what is needed
 */

size_t list_len(const list_t *h)
{
	size_t num_of_element = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_element++;
	}
	return (num_of_element);
}
