#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: integer <= 0
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		c++;
	}
	return (0);
}
