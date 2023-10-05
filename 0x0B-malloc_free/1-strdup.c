#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: an input string
 *
 * Return: a pointer to the string
*/

char *_strdup(char *str)
{
	int j, i = 0;

	while (str[i] != '\0')
		i++;
	char *ptr = malloc(sizeof(char) * i);

	if (str == NULL || ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
	free(ptr)
}