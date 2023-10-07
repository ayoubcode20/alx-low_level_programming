#include "main.h"

/**
 * free_grid - frees a 2d grid previously created by my alloc_grid function
 *
 * @grid: a 2d grid
 * @height: the number of rows
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
