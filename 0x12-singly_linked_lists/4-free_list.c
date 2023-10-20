#include "lists.h"

/**
 * free_list -  frees a list_t list
 *
 * @head: The pointer to the list
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *temp = head;

	temp = temp->next;
	while (temp)
	{
		free(head);
		head = temp;
		temp = temp->next;
	}
}