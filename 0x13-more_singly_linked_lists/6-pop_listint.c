#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the first node
 *
 * Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (0);
	*head = (*head)->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
