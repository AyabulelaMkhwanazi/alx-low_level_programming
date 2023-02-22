#include "main.h"

/**
 * print_last_digit - This function prints last digit
 * @n: The last digit
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d = -1;
	_putchar(d + '0');
	return (d);

}
