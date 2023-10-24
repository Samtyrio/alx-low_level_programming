#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node
 * @head: the pointer to the first node
 * @idx: number of nodes in the list
 * @n: nodes available
 * Return: what is needed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *sn, *u;
	unsigned int i;

	u = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && u != NULL; i++)
		{
			u = u->next;
		}
	}
	if (u == NULL && idx != 0)
	{
		return (NULL);
	}

	sn = malloc(sizeof(listint_t));
	if (sn == NULL)
	{
		return (NULL);
	}

	sn->n = n;
	if (idx == 0)
	{
		sn->next = *head;
		*head = sn;
	}
	else
	{
		sn->next = u->next;
		u->next = sn;
	}

	return (sn);
}
