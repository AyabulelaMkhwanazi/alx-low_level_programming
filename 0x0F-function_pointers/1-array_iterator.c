#include "function_pointers.h"
#include <stdio.h>

/**
 * action - function executes a function
 *
 * Return: nothing.
 */
void action(int a)
{
	action(a);
}

/**
 * array_iterator - function executes a function given as a parameter
 * on each element of an array
 *
 * @array: pointer to the array
 * @size: size of the array
 *
 * @action: pointer to function array_iterator
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
