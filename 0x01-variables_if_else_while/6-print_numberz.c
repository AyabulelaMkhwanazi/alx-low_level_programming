#include <stdio.h>

/**
 * main - main function
 * description - This program prints base 10 numbers starting  from 0
 * Return: 0 (Success)
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

