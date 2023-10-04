#include "main.h"

/**
 * h_is_prime_number - a helper function to is_prime_number
 *
 * @n: integer input
 * @num: integer input
 *
 * Return: an integer value
*/

int h_is_prime_number(int n, int num)
{
	if (n == num)
		return (1);
	if (num % n == 0)
		return (0);
	return (h_is_prime_number(n + 1, num));

}

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: input integer
 *
 * Return: an integer value
*/

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (h_is_prime_number(2, n));

}
