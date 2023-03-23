#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all its parameters
 * @n: argument to use
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int s = va_arg(args, int);
		sum += s;
	}
	va_end(args);
	return(sum);
}
