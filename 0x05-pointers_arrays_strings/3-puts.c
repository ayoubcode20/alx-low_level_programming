#include "main.h"

/**
 * _puts - print a string, folowed by a new line to stdout
 *
 * @str: string parameter to print
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
