#include <stdio.h>

/**
 * main: Entry point
 *
 * Return : Always 0 (Success)
 *
 * Print base 10 numbers starting from 0
 * followed by new line
 */

int main(void)
{
	char c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

