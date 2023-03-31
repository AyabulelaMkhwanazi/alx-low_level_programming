#include <stdlib.h>
#include "main.h"

/**
 * create_array - function creates an array of chars and
 * initializes it with a specific char
 * @size: size
 * @c: characters to print
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
