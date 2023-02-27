#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to print string length
 */

int _strlen(char *c)
{
	int count = 0;

	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}

