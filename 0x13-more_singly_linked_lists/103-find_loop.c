#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to the first node
 * Return: what is needed
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *past;

	p2 = head;
	past = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = past;
			past =  p2;
			while (1)
			{
				p2 = past;
				while (p2->next != head && p2->next != past)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}
