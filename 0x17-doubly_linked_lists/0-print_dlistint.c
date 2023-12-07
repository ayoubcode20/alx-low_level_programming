#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: a dlistint_t list
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		size++;
		temp = temp->next;
	}
	return (size);
}
