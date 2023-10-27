#include "lists.h"

void main()
{
	listint_t *head = NULL;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 10);
	 print_listint(head);
	 reverse_listint(&head);
	 print_listint(head);
}
