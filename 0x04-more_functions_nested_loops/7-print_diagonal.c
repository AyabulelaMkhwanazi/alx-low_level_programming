#include "main.h"

/**
 * print_diagonal - Prints diagonal lines in terminal
 * @n: character to print
 */

void print_diagonal(int n)
{
	int d, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		d = 0;
		while (d < n)
		{
			s = 0;
			while (s < d)
			{
				_putchar(' ');
				s++;
			}
			_putchar(92);
			d++;
		}
		_putchar('\n');
	}
}
