#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @str: a string input
 *
 * Return: The length of a string
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	return (i);
}

/**
 * argstostr -  concatenates all the arguments of the program
 *
 * @ac: integer input
 * @av: a 2d array of chars
 *
 * Return: a pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int sum = 0, i, j, k = 0;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		sum += _strlen(av[i]) + 1;

	str = malloc((sum + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
