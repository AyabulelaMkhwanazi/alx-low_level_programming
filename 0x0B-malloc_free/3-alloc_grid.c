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
	int value = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * width);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(sizeof(int) * height);

		if (matrix[i] == NULL)
		{
			for (i = 0; i >= 0; i++)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			matrix[i][j] = value;
	return (matrix);
}
