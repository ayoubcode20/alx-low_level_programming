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

	for (count = 0; count <= n; count++)
	{
		if (n <= 0)
			putchar('\n');
		else
			putchar('_');
	}
	putchar('\n');
}
