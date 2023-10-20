#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to first link
 * Return: what is needed
 */

void free_list(list_t *head)
{
	list_t *the_list;

	while ((the_list = head) != NULL)
	{
		head = head->next;
		free(the_list->str);
		free(the_list);
	}
}
