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
	list_t *node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!node || !head)
		return (NULL);
	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(node->str);
	}
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	else
		*head = node;
	return (node);
}
