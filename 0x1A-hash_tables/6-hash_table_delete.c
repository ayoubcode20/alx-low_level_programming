#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: The hash table
 *
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
		{
			free(ht->array[i]);
			continue;
		}
		while (ht->array[i])
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
