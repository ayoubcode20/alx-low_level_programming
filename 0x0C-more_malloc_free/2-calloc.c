#include "main.h"

/**
 * *_memset - sets memory to zero
 *
 * @ptr: a pointer to the memory
 * @value: an integer (0)
 * @size: the size of the memory
 *
 * Return: nothing
*/

char *_memset(char *ptr, char value, unsigned int size)
{
	char *s = ptr;

	while (size--)
		*ptr++ = value;
	return (s);
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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * sizeof(int));

	return (ptr);
}
