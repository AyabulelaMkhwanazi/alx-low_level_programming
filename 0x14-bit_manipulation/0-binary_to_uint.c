#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int length = _strlen(b);
	int i;
	unsigned int integer = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < length; i++)
	{

		if (b[length - i - 1] == '1')
		{
			integer += 1 << i;
		}
		else if (b[length - i - 1] != '0')
		{
			return (0);
		}
	}
	return (integer);
}


/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: length
*/
int _strlen(const char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
