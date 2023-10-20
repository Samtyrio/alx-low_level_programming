#include "lists.h"

/**
 * print_list - prints a list
 * @h: pointer to first node
 * Return: what is needed
 */

size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);

		else
			printf("[%d] %s\n", 0, "(nil)");

		h = h->next;
		node++;
	}

	return (node);
}
