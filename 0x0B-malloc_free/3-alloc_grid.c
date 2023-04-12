#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid, make space and free space
 *
 * @width: number of columns, width of grid
 * @height: number of rows, height of grid
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **y, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	y =  (int **) malloc(height * sizeof(int *));

	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		y[x] = malloc(width * sizeof(int));
		if (y[x] == NULL)
		{
			while (x >= 0)
			{
				free(y[x]);
				x--;
			}
			free(y);
			return (NULL);
		}
	}
	return (y);
}
