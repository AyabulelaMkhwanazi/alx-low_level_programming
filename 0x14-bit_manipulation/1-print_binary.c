#include "main.h"
#include <stdio.h>

/**
 * print_binary - function prints the binary representation of a
 * number
 * @n: integer
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
