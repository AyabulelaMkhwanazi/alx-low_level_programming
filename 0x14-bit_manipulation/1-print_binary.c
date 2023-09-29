#include "main.h"

/**
 * print_binary - function prints the binary representation of a number.
 *
 * @n: the number to print binary representation of.
 *
 * Return: binary representation of a number.
*/
void print_binary(unsigned long int n)
{
	static int flag = 0;
	unsigned long int bin;

	if (n == 0 && flag == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	bin = n & 1;

	if (bin == 1)
	{
		flag = 1;
	}
	if (flag)
	{
		_putchar(bin + '0');
	}
}
