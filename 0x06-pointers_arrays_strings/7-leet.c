#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: a pointer to a string input
 *
 * Return: a pointer to the string input
*/

char *leet(char *s)
{
	int i, j;
	char a[] = "4433007711";
	char b[] = "aAeEoOtTlL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == b[j])
				s[i] = a[j];
		}
	}

	return (s);
}
