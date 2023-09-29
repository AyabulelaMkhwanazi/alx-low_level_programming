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

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num << 1;
			num = num + b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (num);
}
