#include "main.h"

int is_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: the number.
 * Return: 1 else -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (is_sqrt_recursion(n, 0));
	}
}

/**
 * is_sqrt_recursion - finds the natural square root recursively.
 * @n: number to find root.
 * @i: iterator.
 * Return: the square root.
 */

int is_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (is_sqrt_recursion(n, i + 1));
	}
}
