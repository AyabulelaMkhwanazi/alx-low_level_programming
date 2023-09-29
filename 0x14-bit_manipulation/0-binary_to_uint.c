#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num << 1;
			num = num + '0';
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	return (num);
}
