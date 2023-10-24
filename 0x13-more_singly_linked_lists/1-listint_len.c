#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the first element
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
