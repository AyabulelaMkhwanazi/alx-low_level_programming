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
	int bit = 0;
	unsigned long int var;

	for (i = 63; i >= 0; i--)
	{
		var = n >> i;

		if (var & 1)
		{
			printf("1");
			bit++;
		}
		else if (bit)
		{
			printf("0");
		}
	}
	if (bit == 0)
		printf("0");
}
