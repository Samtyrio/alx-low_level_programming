#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: the first node in the list
 * Return: what is needed
 */

void free_listint2(listint_t **head)
{
	listint_t *sp, *present;

	if (head != NULL)
	{
		present = *head;
		while ((sp = present) != NULL)
		{
			present = present->next;
			free(sp);
		}
		*head = NULL;
	}
}
