#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function searches of an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to use
 * Return: cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
