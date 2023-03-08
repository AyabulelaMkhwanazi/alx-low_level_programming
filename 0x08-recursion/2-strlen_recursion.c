#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: represents the string
 * Return: 0 (at end of string)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else if (*s == '\0')
	{
		return (0);
	}
	return (0);
}
