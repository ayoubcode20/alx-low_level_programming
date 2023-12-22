#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *hs = malloc(sizeof(hash_table_t));

	if (!hs)
		return (NULL);
	hs->size = size;
	hs->array = calloc(hs->size, sizeof(hash_node_t));
	if (!hs->array)
		return (NULL);
	for (i = 0; i < size; i++)
		hs->array[i] = NULL;
	return (hs);
}
