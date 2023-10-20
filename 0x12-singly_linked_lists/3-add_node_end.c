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

	if (node == NULL || head == NULL)
		return (NULL);
	list_t *temp = *head;

	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		node->len = _strlen(node->str);
		node->next = NULL;
	}
	return (node);
}
