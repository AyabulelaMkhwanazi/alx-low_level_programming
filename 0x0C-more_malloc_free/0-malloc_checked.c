#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc.
 *
 * @b: unsigned integer.
 *
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
