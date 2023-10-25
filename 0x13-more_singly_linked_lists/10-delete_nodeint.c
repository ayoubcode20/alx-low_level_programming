#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pre;
	listint_t *current = *head;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	pre = NULL;
	while (current && i < index)
	{
		pre = current;
		current = current->next;
		i++;
	}

	if (!current)
		return (-1);
	pre->next = current->next;
	free(current);
	return (1);
}
