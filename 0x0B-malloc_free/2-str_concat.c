#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 *
 * @s1: first string input
 * @s2: second string input
 *
 * Return: a pointer to a string
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size, k;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	size = i + j + 1;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (k = 0; k < size; k++)
	{
		if (k < i)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[j++];
	}
	ptr[size] = '\0';

	return (ptr);
	free(ptr);
}
