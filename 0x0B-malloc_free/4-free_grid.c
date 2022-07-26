#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function description
 * @grid: the grid
 * @height: height of grid
 * Return: pointer to the new allocated mem. space
 */

void free_grid(int **grid, int height)
{
	int col;

	for (col = 0; col < height; col++)
	{
		free(grid[col]);
	}
	free(grid);
}
