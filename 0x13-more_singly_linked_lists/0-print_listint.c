#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: the first node
 *
 * Return:  number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
