#include "main.h"

/**
 * print_triangle - prints a triangle in terminal
 * @size: character to print
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a < size; a++)
		{
			for (b = size - 1; b > 0; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c < a; c++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
