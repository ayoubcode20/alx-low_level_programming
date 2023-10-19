#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: The first node
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;

	list_t *temp = h;
	for (i = 0; temp != NULL; i++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n")
		else
			printf("[%lu] %s\n", temp->len, temp->str);
		temp = temp->next;
	}

	return (i);
}
