#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabit in lowercase then in uppercase.
 *
 * Return: Always 0 (success).
*/

int main(void)
{
	char ch;
	char cH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (cH = 'A'; cH <= 'Z'; cH++)
	{
		putchar(cH);
	}
	putchar('\n');

	return (0);
}
