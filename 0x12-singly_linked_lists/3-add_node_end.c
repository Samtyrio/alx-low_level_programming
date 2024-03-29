#include "lists.h"

/**
 * add_node_end - adds a new node at the end of node
 * @head: pointer to the first node
 * @str: string to be added
 * Return:what is needed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t element;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (element = 0; str[element]; element++)
		;

	new_node->len = element;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (*head);
}
