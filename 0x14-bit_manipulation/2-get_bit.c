#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given
 * index.
 *
 * @n: the number.
 * @index: the index in which to get bit at.
 *
 * Return: the value of the bit at index or
 * -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n == 0 && index == 0)
	{
		return (0);
	}
	else
	{
		bit = n >> index;
		bit = bit & 1;
	}
	return (bit);
}
