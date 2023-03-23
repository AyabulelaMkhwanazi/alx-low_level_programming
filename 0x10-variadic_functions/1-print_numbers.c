#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints numbers, followed by
 * a new line
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int s = va_arg(args, int);

		printf("%d", s);

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
