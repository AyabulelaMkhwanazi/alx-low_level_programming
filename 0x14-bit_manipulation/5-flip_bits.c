#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function returns the nubmer of bits needed to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int bit_num = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
		{
			bit_num++;
		}
	}
	return (bit_num);
}
