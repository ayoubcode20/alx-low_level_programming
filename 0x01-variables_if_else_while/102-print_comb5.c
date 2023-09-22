#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  prints all possible combinations of two two-digit
 * numbers and the numbers must be diffrent.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 1 + i; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchat((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
