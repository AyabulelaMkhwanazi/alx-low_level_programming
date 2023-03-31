#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2D grid/array previously created
 * by alloc_grid function
 * @grid: pointer to a pointer array
 * @height: input
 * Return: free'd array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
