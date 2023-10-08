#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;

	return (counter);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first input string
 * @s2: second input string
 * @n: integer input
 *
 * Return: a pointer to a string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > _strlen(s2))
		n = _strlen(s2);

	ptr = malloc(_strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		ptr[i] = s1[i];

	for (j = 0; j < n ; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
