#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: a pointer to the first node
 * @str: The string of the new node
 *
 * Return: address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	list_t *temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);

}
