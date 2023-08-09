#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);

}
