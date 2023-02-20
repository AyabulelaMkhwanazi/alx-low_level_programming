#include <stdio.h>

/**
 * main: Print base 10 digits , function int
 * use putchar twice
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}

