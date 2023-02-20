#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints alphabets in reverse
 * Return - Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		printf("%c", c);
		c--;
	}
	return (0);
}
