#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: a number
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int i, set = 0, bit;

	if (!n)
		_putchar('0');
	else
	{
		for (i = sizeof(unsigned long int) * 8; i >= 0; i--)
		{
			bit = (n >> i) & 1;
			if (bit)
				set = 1;
			if (set)
				_putchar(bit + 48);
		}
	}
}
