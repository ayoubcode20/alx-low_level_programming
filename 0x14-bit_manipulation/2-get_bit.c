#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: a number
 * @index: the index of a bit
 *
 * Return: the value of a bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((int)((n >> index) & 1));
}
