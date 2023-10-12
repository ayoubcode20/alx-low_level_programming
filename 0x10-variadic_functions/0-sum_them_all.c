#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: first parameter
 *
 * Return: The sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	if (!n)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
