#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: integer to allocate number of bytes
 * Return: 0 (success)
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(sizeof(int) * b);

	if (s == NULL)
		exit (98);

	return (s);
}
