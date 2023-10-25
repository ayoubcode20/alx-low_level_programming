#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp = head;

	if (!head)
		return (0);
	for (sum = 0; tmp; sum++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
