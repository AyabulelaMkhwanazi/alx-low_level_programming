#include "main.h"

/**
 * alloc_grid - function returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: width.
 * @height: height.
 *
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (s = 0; s < width; s++)
		{
			grid[i][s] = 0;
		}
	}
	return (grid);
}
