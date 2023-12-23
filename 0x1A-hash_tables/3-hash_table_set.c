#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node || !key || !ht)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	size_t ind = key_index(key, ht->size);

	if (!ht->array[ind])
		ht->array[ind] = node;
	else
	{
		if (strcmp(key, ht->array[ind]->key) == 0)
			ht->array[ind]->value = strdup(value);
		else
		{
			node->next = ht->array[ind];
			ht->array[ind] = node;
		}
	}

	return (1);
}
