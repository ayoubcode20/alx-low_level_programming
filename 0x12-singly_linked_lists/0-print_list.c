#include "lists.h"

/**
 * _strlen - finds the length
 *
 * @s: The string
 *
 * Return: The length
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: The first node
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}
