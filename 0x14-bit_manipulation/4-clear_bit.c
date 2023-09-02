#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0
 * at a given index.
 *
 * @index: the index starting from 0 of the bit you want
 * to set.
 * @n: points to the number to change bit in.
 *
 * Return: On success 1.
 * On error; -1;
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;

	mask = ~mask;

	*n = *n & mask;
	
	return (1);
}
