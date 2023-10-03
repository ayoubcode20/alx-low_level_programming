#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * it will use at most n bytes from src
 *
 * @dest: pointer to the destenation input
 * @src: pointer to the source input
 * @n: number of chars to append
 *
 * Return: pointer to the destenation
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n || src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
