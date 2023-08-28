#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: nothing
*/

void print_triangle(int size)
{
	int hight, base;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hight + base) <= size)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}

	}
}
