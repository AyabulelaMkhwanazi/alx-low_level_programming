#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 (success), else -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}