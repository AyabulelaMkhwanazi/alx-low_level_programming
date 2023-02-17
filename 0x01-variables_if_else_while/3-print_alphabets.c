#include <stdio.h>

/**
 * main: Entry point
 *
 *description: Print alphabet in lowercase and
 *then in uppercase followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while(c <= 'z' && d <= 'Z')
	{ 
		putchar(c);
		c++;
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
