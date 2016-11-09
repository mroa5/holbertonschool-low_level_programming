#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * alloc_grid - allocate a 2d integer grid
 *
 * @width: width of grid
 * @height: height of grid
 * return: returns pointer to grid created
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, k;

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
