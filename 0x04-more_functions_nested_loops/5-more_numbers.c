#include "main.h"

/**
 * more_numbers - Prints 10x more numbers from 0 to 14
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
