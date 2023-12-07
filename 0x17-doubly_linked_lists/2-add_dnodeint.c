#include "lists.h"

/**
 * add_dnodeint -  a function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: a dlistint_t list
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
