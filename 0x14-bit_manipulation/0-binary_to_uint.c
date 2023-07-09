#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		dec = dec << 1;

		if (*b == '1')
		{
			dec = dec | 1;
		}
		else if (*b != '0')
		{
			return (0);
		}
		b++;
	}
	return (dec);
}
