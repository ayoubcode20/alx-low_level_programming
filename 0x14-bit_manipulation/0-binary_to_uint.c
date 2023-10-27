#include "main.h"

/**
 * _strlen - counts length of a string
 * @s: the string
 *
 * Return: the result
*/
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * _pow - raises a number to a power
 * @base: the base (number)
 * @exp: the exponent (It's power)
 *
 * Return: the result
*/

unsigned int _pow(unsigned int base, unsigned int exp)
{
	unsigned int res = 1, i;

	for (i = 0; i < exp; i++)
		res *= base;
	return (res);
}

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b:  a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if it failed
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i, len;

	if (!b)
		return (0);
	len = _strlen(b);
	for (i = 0; len; i++)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
			return (0);
		if (b[len - 1] == '1')
			res += _pow(2, i);
		len--;
	}
	return (res);
}
