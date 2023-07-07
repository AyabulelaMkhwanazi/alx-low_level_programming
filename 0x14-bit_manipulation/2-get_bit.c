#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: the number
* @index : index starting from 0 of bit to get
* Return: bit value at index, or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (bit_val > 63)
	{
		return (-1);
	}

	bit_val = (n >> index) & 1;

	return (bit_val);
}
