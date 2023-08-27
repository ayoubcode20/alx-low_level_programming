#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: is the size of the square
 *
 * Return: nothing
*/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				putchar('#');
			putchar('\n');
		}
	}
}
