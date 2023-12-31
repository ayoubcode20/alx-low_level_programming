#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first num
 * @m: the second num
 *
 * Return: result
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}
	return (count);
}
