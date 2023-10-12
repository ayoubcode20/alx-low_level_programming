#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 *
 * @separator: a separator to be printed between numbers
 * @n: number of strings
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s", va_arg(args, char*),
			i ? (separator ? separator : "") : "\n");
	va_end(args);
}
