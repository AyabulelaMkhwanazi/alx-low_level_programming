#include "main.h"

/**
 * flip_bits - function returns the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: the first number.
 * @m: the second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	unsigned int counter = 0;

	bit = n ^ m;

	while (bit != 0)
	{
		if (bit & 1)
		{
			counter++;
		}
		bit = bit >> 1;
	}
	return (counter);
}
