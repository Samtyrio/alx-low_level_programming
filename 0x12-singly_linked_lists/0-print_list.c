#include "lists.h"

/**
 * print_list - prints lists
 * @h: pointer to the head of the list
 * Return: what is needed
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		
		else
			printf("[%d] %s\n", 0, "(nil)");

		nodes++;
		h = h->next;
	}
	return (nodes);
}
