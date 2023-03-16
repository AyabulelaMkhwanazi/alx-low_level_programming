#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: integer to allocate number of bytes
 * Return: 0 (success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
		
	ptr = malloc(b);
		
	if (ptr == NULL)
		exit(98);
			
	return (ptr);
}
