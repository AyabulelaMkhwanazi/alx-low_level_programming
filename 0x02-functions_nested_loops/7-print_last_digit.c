#include "main.h"

/**
 * print_last_digit - This function prints last digit
 * @n: The last digit will be extracted
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;
	if (a < 0)
		_putchar(a + '0');

	return (a);
}

