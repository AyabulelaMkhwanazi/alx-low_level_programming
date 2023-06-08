#include "main.h"

/**
 * factorial - function returns the factorial of a given number.
 *
 * @n: number to get factorial of.
 *
 * Return: the factorial of a given number, (if n < 0, return -1).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
