#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: character to print
 * Return: 1 (true) else 0
 */

int _isupper(int c)
{
	c = 0;

	if (c >= 65 && c <= 90)

		return (1);

	else
		return (0);
}

