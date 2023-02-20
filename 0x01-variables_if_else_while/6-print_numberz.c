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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}

