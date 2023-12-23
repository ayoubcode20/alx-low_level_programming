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
	unsigned long int ind;
	hash_node_t *node, *current;

	if (!ht || !key || *key == '\0')
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);

	current = ht->array[ind];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[ind])
		ht->array[ind] = node;
	else
	{
		node->next = ht->array[ind];
		ht->array[ind] = node;
	}
	return (1);
}
