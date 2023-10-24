#include "lists.h"

/**
 * pop_listint - deletes the first node in a list
 * @head: pointer to the list
 * Return: what is needed
 */

int pop_listint(listint_t **head)
{
	listint_t *recent, *j;
	int node1;

	if (*head == NULL)
	{
		return (0);
	}

	recent = *head;
	node1 = recent->n;
	j = recent->next;

	free(recent);

	*head = j;

	return (node1);
}
