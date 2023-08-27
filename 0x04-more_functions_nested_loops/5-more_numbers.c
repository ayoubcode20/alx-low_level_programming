#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use putchar three times
 *
 * Return: nothing
*/

void more_numbers(void)
{
	int num, row, counter;

	for (row = 1; row <= 10; row++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			num = counter;
			if (counter > 9)
			{
				putchar(1 + 48);
				num = counter % 10;
			}
			putchar(num + 48);
		}
		putchar('\n');
	}
}
