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
	unsigned int x, i, sum = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}

	va_end(args);

	return (sum);
}
