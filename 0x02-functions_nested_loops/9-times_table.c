#include "main.h"

/**
 * times_table - This function prints the 9 times table
 */

void times_table(void)
{
	int num;
	int nine;
	int multi;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (nine = 1; nine <= 9; nine++)
		{
			_putchar(',');
			_putchar(' ');

			multi = num * nine;
			if (multi <= 9)
				_putchar(' ');
			else
				_putchar(multi / 10);
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
