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
	unsigned int min_size = (old_size < new_size) ? old_size : new_size;
	void *p;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr != NULL)
	{
		p = malloc(new_size);
		for (i = 0; i < min_size; i++)
			((char *)p)[i] = ((char *)ptr)[i];
		free(ptr);
		return (p);
	}
}
