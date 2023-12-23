#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: The hash table to print
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int first = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		temp = ht->array[i];
		while (temp)
		{
			if (!first)
				printf(", ");
			first = 0;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
