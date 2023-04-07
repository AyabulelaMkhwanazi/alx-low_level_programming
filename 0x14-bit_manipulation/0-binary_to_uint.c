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

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		digit = 2 * digit + b[i] - '0';

		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (digit);
}
