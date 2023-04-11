#include "main.h"
#include <stdio.h>

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: integer 
 * @index: index starting from 0
 * Return: value_of_bit (at index), or -1 (error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
		return (-1);

	value_of_bit = ((n >> index) & 1);

	return (value_of_bit);
}
