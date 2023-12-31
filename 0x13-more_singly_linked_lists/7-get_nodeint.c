#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the first node
 * @index: the index of the node
 *
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i <= index && tmp; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
