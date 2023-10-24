/**
 * free_lists - frees a list
 * @head: pointer to the first node
 * Return: what is needed
 */
void free_lists(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}


/**
 * free_listint_safe - frees a list.
 * @h: pointer to the first node
 * Return: what is needed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *ptr, *new, *add;
	listint_t *pre;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_lists(&ptr);
				return (nodes);
			}
		}

		pre = *h;
		*h = (*h)->next;
		free(pre);
		nodes++;
	}

	*h = NULL;
	free_lists(&ptr);
	return (nodes);
}
