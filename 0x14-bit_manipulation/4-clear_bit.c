#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: pointer to the integer to change
 * @index: index to the bit to clear
 * Return: 1 (success), else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
