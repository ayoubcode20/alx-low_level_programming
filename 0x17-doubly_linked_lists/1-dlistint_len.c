#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list
 * @h: linked dlistint_t list
 *
 * Return: numebr of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp;

	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
