#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the old memory block
 * @old_size: size of the allocated ptr
 * @new_size: size of the new allocated memory block
 *
 * Return: pointer to the new allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}

	return (p);
}
