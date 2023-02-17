#include <stdio.h>

/**
 *Description: Get alphabet in lowercase and
 *uppercase then print followed by new line
 *
 * Main: Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
