#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of arguments
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
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
	{
		printf("%d%s", va_arg(args, int),
			i ? (separator ? separator : "") : "\n");
	}
	printf("\n");
	va_end(args);
}
