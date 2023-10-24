#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the pointer to the head of the string
 * Return: what is needed
 */

void free_listint(listint_t *head)
{
	listint_t *sp;

	while ((sp = head) != NULL)
	{
		head = head->next;
		free(sp);
	}
}
