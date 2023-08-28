#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
*/

void print_number(int n)
{
	unsigned int nm = n;

	/* first check if It's negative */
	if (n < 0)
	{
		putchar('-');
		nm = -nm;
	}

	/* print the first few digits */
	if ((nm / 10) > 0)
		print_number(nm / 10);

	/* print the last digit */
	putchar((nm % 10) + 48);
}
