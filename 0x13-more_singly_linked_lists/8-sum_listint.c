#include "lists.h"

/**
 * sum_listint - sums list together
 * @head: the pointer to the first node
 * Return: what is needed
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
