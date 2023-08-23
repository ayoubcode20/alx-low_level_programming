#include "main.h"

/**
 * print_rev - prints reversed string, flowed by a new line
 *
 * @s: pointer the string to print
 *
 * Return: nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
