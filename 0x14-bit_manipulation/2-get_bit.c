#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number given
 * @index: the index to get bit at.
 *
 * Return: the value of the bit at index
 * On error: -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    mask = 1UL << index;

    bit_value = (n & mask) ? 1 : 0;

    return (bit_value);
}
