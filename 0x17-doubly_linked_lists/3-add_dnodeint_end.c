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
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	dlistint_t *tmp = *head;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
