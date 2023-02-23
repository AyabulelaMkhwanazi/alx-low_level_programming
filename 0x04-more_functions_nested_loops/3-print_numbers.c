#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers from 0 to 9
 */

void print_numbers(void)
{

	int a = 0;

	while (a <= 9)
	{
		putchar(a);
	}	
	putchar('\n');
	a++;
}
