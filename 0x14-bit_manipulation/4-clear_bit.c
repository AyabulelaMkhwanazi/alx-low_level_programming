#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given
 * index.
 *
 * @n: pointer to the number.
 * @index: index starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked or
 * -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 31)
	{
		return (-1);
	}

	bit = 1 << index;
	*n = *n & ~bit;

	return (1);
}
