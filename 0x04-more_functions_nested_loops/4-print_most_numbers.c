#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart from
 * 2 and 4 and you can only use putchar twice
 *
 * Return: nothing
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		putchar(num + 48);
	}
	putchar('\n');
}
