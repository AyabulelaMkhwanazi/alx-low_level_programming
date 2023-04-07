#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: characters
 * Return: converted number or 0 
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int digit = 0;
	int num;
	int convert;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = b[i];

		digit = digit * 2 + num - '0';

		convert = digit;
	}
	return (convert);
}
