#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: a pointer to a string
 * @f: a pointer to a function that prints a name
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
