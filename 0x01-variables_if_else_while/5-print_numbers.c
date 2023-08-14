#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: prints all single digit numbers of base 10.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	for (int num = 0; num <= 9; num++)
	{
		printf("%i", num);
	}
	printf("\n");

	return (0);
}
