#include "main.h"

/**
 * _calloc - function allocates memory for an array, using malloc
 *
 * @nmemb: the number of elements in an array
 * @size: bytes of each element in the array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
	}

	ptr = array;

	return (array);
}
