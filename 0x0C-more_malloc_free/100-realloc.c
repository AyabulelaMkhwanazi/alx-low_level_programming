#include "main.h"

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
	if (new_size == old_size)
	{
		return (ptr);
	}
	
	if (new_size > old_size)
	{
	}
}