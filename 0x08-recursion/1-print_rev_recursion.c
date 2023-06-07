#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: the string to print
 * Return: the string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
	{
		return;
	}
}
