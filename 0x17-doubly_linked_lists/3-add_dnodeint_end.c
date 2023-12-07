#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list.
 * @head: a dlistint_t list
 * @n: The data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (!head)
		return (NULL);

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		dlistint_t *current = *head;
		while (current->next)
			current = current->next;
		new->prev = current;
		current->next = new;
	}

	return (new);
}
