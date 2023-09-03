#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number.
*/
void print_binary(unsigned int n)
{
	char nums;
	int i;
	int bits = sizeof(unsigned int) * 8;
	int one = 0;

	for(i = bits - 1; i >= 0; i--)
	{
		nums = (n >> i) & 1;

		if (nums == 1)
		{
			one = 1;
		}
		if (one)
		{
			_putchar(nums + '0');
		}
	}
	if (!one)
	{
		_putchar('0');
	}
}
