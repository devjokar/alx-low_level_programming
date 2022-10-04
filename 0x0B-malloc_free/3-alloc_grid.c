#include "main.h"

/**
 * alloc_grid - return pointer to 2d array of int
 * @width: width of array
 * @height: height of array
 * Return: Pointer to 2d array of int
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			for (j = 0; j < i; j++)
				free(grid[j]);
		free(grid);
	}
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

