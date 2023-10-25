#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index (position)
 * @n: content of the new node
 *
 * Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
	{
		free(new);
		return (NULL);
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
