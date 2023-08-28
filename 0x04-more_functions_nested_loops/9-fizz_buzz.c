#include "main.h"

/**
 * main - Entry point
 *
 * Description: FizzBuzzz game
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (count % 5 == 0 && !(count % 3 == 0))
			printf("Buzz");
		else if (count % 5 == 0 && count % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", count);

		if (count != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
