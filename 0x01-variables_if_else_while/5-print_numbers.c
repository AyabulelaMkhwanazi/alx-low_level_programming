#include <stdio.h>

/**
 * main: Entry point
 *
 * Return: Always 0 (Success)
 *
 * Prints all single digit numbers of base 10
 * starting from 0, followed by new line
 *
 */
int main(void)
{
	char i = 0;

	while (i <= 10)
	{
		putchar("%d\n", i);
	}
	return (0);
}
