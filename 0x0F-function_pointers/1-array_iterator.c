#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes a function
 * given as a paramenter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
