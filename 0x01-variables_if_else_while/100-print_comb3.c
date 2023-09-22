#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints all possible different combinations
 * of two digits and the two digits must be different.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 1 + i; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
