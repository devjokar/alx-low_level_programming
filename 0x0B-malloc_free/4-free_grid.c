#include "main.h"

/**
 * free_grid - free 2d array of integers
 * @grid: 2d array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

