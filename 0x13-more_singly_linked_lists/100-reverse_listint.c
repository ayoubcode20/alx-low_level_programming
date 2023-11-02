#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the first node
 *
 * Return:  pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	current = *head;
	*head = NULL;
	while (current)
	{
		next = current->next;
		current->next = *head;
		*head = current;
		current = next;
	}
	return (*head);
}
