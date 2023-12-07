#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list
 * @head: the dlistint_t linked list
 * @index: The index of the node
 *
 * Return: The nth node or NULL if it failed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int size = 0;

	if (!head)
		return (NULL);

	while (temp->next)
	{
		if (index == size)
			return (temp);
		temp = temp->next;
		size++;
	}

	return (NULL);
}
