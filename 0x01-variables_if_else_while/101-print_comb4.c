#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all possible different combinations
 * of three digits and the three digits must be different.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, j, f;

	for (i = 48; i < 56; i++)
	{
		for (j = 1 + i; j < 57; j++)
		{
			for (f = 1 + j; f < 58; f++)
			{
				putchar(i);
				putchar(j);
				putchar(f);
				if (i == 55)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
