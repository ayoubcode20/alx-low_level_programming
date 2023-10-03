#include "main.h"

/**
 * reverse_array -  a function that reverses
 * the content of an array of integers.
 *
 * @a: a pointer to the array of integers
 * @n: number of elements in the array
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, temp, j = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
