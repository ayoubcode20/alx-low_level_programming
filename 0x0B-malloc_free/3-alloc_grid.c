#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2d array of integers.
 *
 * @width: integer input
 * @height: intege input
 *
 * Return: a pointer to a 2d array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
		for (i = 0; i < width; i++)
			ptr[j][i] = 0;

	return (ptr);
}
