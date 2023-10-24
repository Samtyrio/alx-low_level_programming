#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 *
 * Return: what is needed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *g;
	listint_t *n;

	g = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = g;
		g = *head;
		*head = n;
	}

	*head = g;
	return (*head);
}
