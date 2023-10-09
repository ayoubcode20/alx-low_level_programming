#include "main.h"

/**
 * isNumber - checks if a string is a number
 *
 * @str: a stringn input
 *
 * Return: true or false (1 or 0)
*/

int isNumber(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
			continue;
		else
			return (0);
	}

	return (1);
}

/**
 * main - adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: zero indicating success
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	if (argc > 1)
		printf("%d\n", sum);

	return (0);
}
