#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: a char to initialize the array
 *
 * Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	ptr[0] = c;
	ptr[1] = '\0';

	return (ptr);
}
