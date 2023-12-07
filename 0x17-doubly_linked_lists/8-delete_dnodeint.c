#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: a dlistint_t linked list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (count = 0; temp; count++)
	{
		if (index == count)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
