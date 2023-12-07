#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: The list
 * @idx: The index of the new node
 * @n: The data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp;
	unsigned int count = 0;

	if (!h || (!*h && idx != 0) || !new)
	{
		if (new)
			free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			if (temp->next)
				temp->next->prev = new;
			new->prev = temp;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	free(new);
	return (NULL);
}
