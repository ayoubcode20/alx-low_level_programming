#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key you're looking for
 *
 * Return: the value associated with the key
 * or NULL if it couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int long ind;
	hash_node_t *temp;

	if (!ht || !key || *key == '\0')
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[ind])
		return (NULL);
	temp = ht->array[ind];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
