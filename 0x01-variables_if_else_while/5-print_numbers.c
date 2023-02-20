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
	int i;

	for(i = 0; i <= 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

