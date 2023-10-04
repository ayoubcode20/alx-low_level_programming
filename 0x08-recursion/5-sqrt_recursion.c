#include "main.h"

/**
 * h_sqrt_recursion - a helper function for returning the sqrt
 *
 * @n: first input num
 * @num: second input num
 *
 * Return: the sqare root
*/

int h_sqrt_recursion(int n, int num)
{
	if (n * n == num)
		return (n);
	else if (n * n > num)
		return (-1);
	return (h_sqrt_recursion(n + 1, num));
}

/**
 * _sqrt_recursion -  function that returns
 * the natural square root of a number.
 *
 * @n: the input number
 *
 * Return: the square root of the number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (h_sqrt_recursion(1, n));
}
