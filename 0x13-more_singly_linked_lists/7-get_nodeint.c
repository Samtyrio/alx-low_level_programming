#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node index
 * @head: the pointer to the first node
 * @index: index of the node
 * Return: what is needed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
