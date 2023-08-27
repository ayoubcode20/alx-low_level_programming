#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 * should be printed
 *
 * Return: nothing
*/

void print_line(int n)
{
	int count;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (count = 0; count <= n; count++)
			putchar('_');
		putchar('\n');
	}
}
