#include "lists.h"

/**
 * add_node - add a new node to the beginning
 * @head: pointer to the pointer of the first node
 * @str: new node string
 * Return: what is needed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (!head || !str)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
