#include "main.h"

/**
 * _puts_recursion - function prints a string, followed by a new line
 * @s: represents the string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	_putchar('\n');
}
