#include "main.h"

/**
 * _memset - sets memory to zero
 *
 * @ptr: a pointer to the memory
 * @value: an integer (0)
 * @size: the size of the memory
 *
 * Return: nothing
*/

void _memset(void *ptr, int value, unsigned int size)
{
	unsigned int i;
	unsigned char *p = (unsigned char *)ptr;

	for (i = 0; i < size; i++)
		p[i] = (unsigned char)value;
}

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size);

	return (ptr);
}
