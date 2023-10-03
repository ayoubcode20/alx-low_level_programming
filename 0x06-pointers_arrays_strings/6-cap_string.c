#include "main.h"

/**
 * isdelimiter - it checks if the char is a delimiter.
 *
 * @ch: a char input to be checked
 *
 * Return: an integer
*/

int isdelimiter(char ch)
{
	int i;
	char delimiters[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 13; i++)
		if (ch == delimiters[i])
			return (1);
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @s: a pointer to the string to be capitalized
 *
 * Return: a pointer to the capitalized string
*/

char *cap_string(char *s)
{
	int i;
	char *p = s;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (isdelimiter(p[i]) && (p[i + 1] >= 97 && p[i + 1] <= 122))
			p[i + 1] -= 32;
	}

	return (p);
}
