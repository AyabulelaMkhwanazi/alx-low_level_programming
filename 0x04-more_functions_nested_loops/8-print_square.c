#include "main.h"

/**
 * print_square - Prints squares
 */

void print_square(int size)
{
	int s,sq;
	size = 2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (sq = 0; sq < size; sq++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
