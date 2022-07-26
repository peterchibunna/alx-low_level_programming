#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function description
 * @width: width of array
 * @height: height of array
 * Return: pointer to the new allocated mem. space
 */

int **alloc_grid(int width, int height)
{
	int **grid, _w, _h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (_h = 0; _h < height; _h++)
	{
		grid[_h] = malloc(sizeof(int) * width);

		if (grid[_h] == NULL)
		{
			for (_h--; _h >= 0; _h--)
			{
				free(grid[_h]);
				free(grid);
			}
			return (NULL);
		}
	}
	for (_h = 0; _h < height; _h++)
	{
		for (_w = 0; _w < width; _w++)
		{
			grid[_h][_w] = 0;
		}
	}

	return (grid);
}
