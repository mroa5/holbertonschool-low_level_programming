#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - allocate a 2d integer grid
 *
 * @width: width of grid
 * @height: height of grid
 * Return: returns pointer to grid created
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(void *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(*(grid + i));
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
