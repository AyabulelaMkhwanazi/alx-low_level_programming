#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: the string to print
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length++;
		return (length += _strlen_recursion(s + 1));
	}
}
