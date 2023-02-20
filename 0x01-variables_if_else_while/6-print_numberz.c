#include <stdio.h>

/**
 * main: Program that uses function int
 * and uses putchar twice
 * Return: Always 0 (Success)
 *
 * Only use int  and putchar
 * can only use putchar twice
 *
 * print base 10 numbers from 0
 * followed by new line
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

