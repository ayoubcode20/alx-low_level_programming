#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the first node
 *
 * Return:  pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	tmp = (*head)->next;
	tmp2 = tmp->next;
	(*head)->next == NULL;

	while (tmp != NULL)
	{
		tmp->next = *head;
		*head = tmp;
		tmp = tmp2;
		if (tmp == NULL)
			break;
		tmp2 = tmp2->next;
	}
	return (*head);
}
