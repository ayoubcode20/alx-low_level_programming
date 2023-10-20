#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: The first node.
 * @str: The data for the node.
 *
 * Return:  address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}
