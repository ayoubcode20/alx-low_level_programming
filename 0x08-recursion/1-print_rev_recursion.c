#include "main.h"

/**
 * _print_rev_recursion -  a function that prints a string in reverse.
 *
 * @s: a pointer to a string input
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(s[0]);
}
