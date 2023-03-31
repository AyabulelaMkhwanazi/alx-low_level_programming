#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: character to print
 * @f: function to pointer
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
