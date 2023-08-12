#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - function reallocates memory block using malloc
 * and free
 *
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the size, in bytes, of the new memory block
 *
 * Return:
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *new_ptr;
	unsigned int size;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	size = new_size > old_size ? new_size : old_size;

	old_ptr = ptr;

	_memcpy(new_ptr, old_ptr, old_size);

	return (new_ptr);
}

/**
 * _memcpy - function copies memory area
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to be copied from src to dest
 *
 * Return: src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
