#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the first integer
 * @max: the last integer
 *
 * Return: a pointer to the new array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int j = min;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; j <= max; i++)
	{
		ptr[i] = j;
		j++;
	}

	return (ptr)
}
