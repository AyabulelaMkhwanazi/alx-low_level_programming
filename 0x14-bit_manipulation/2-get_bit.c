#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: the number
* @index : index starting from 0 of bit to get
* Return: bit value at index, or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (val > 63)
	{
		return (-1);
	}
	val = (n >> index) & 1;

	return (val);
}
