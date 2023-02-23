#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: result
 */

void print_numbers(void)
{

	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
	a++;
}
