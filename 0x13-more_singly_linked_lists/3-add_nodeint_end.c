#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: pointer to the first node in the list
 * @n: number of nodes
 * Return: what is needed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *sp;

	/*(void) sp;*/

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	sp = *head;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (sp->next != NULL)
		{
			sp = sp->next;
		}
		sp->next = n_node;
	}
	return (*head);
}
