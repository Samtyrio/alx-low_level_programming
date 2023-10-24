#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: the pointer to the first node
 * @n: the number of nodes
 * Return: whay is needed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}
