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
	else if (new_size > old_size)
	{
		p = malloc(new_size);
		for (i = 0; i < (old_size / sizeof(ptr[0])); i++)
			p[i] = ptr[i];
		free(ptr);
		return (p);
	}
	else if (new_size < old_size)
	{
		p = malloc(new_size);
		for (i = 0; i < (new_size / sizeof(ptr[0])); i++)
			p[i] = ptr[i];
		free(ptr);
		return (p);
	}
}
