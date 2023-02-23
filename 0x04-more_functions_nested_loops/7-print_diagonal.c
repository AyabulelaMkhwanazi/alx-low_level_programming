#include "main.h"

/**
 * print_diagonal - Prints diagonal lines in terminal
 * @n: character to print
 */

void print_diagonal(int n)
{
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		d = 0;
		while (d < n)
		{
			_putchar(92);
			d++;
		}
		_putchar('\n');
	}
}
