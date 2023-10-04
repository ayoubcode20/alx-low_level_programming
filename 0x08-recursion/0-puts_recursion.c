#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line
 *
 * @s: a pointer to the string to be printed
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[0]);
	s += 1;
	_puts_recursion(s);
}
