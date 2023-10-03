#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: a pointer to the destenation input
 * @src: a pointer to the source input
 * @n: maximum numbers to copy
 *
 * Return: a pointer to the destenation
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
