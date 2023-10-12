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

	va_start(args, n);

	while (i--)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != 0)
			printf("%s", separator);
		if (i != 0)
			printf(" ");
	}
	printf("\n");
	va_end(args);
}
