#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime
 * factor of number (n)
 *
 * @n: number to find
 *
 * Return: largest number (count)
*/

long long largest_prime_factor(long long n)
{
	long long count = 2;

	while (n > 0)
	{
		if (n % count == 0)
			n /= count;
		else
			count++;
	}

	return (count);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	long long n = 612852475143;
	long long result = largest_prime_factor(n);

	printf("%lld\n", result);

	return (0);
}
