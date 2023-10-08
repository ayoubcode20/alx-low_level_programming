#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: pointer to the destenation input
 * @src: pointer to the source input
 *
 * Return: pointer to the destenation
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
		len++;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);
}
