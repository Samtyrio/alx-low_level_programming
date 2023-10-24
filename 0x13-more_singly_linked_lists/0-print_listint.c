#include "lists.h"

/**
 * print_listint - prints the number of elements in a list
 * @h: the node in the string
 * Return: whatever is needed
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
