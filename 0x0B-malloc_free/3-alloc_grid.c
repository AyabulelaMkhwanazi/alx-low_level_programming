#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function returns a pointer to a 2D array of integers
 * @width: input
 * @height: input
 * Return: 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
