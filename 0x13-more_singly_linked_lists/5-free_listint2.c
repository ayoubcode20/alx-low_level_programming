#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
