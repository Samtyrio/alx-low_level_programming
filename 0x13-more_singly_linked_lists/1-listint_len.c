#include "lists.h"

/**
 * listint_len - returns the number of element in a link
 * @h: the pointer to the first node
 * Return: whatever is needed
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
