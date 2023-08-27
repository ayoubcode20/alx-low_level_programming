#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: is the number of times the \ character should be printed
*/

void print_diagonal(int n)
{
	int count;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (count = 0; count < n; count++)
		{
			char space = ' ';

			putchar(space);
			space++;
			putchar('\\');
			putchar('\n');
		}
	}
}
