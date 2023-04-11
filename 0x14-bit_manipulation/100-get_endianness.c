#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function checks the endianness
 * Return: 0 (big endian), else 1 (little endian)
 */

int get_endianness(void)
{
	int i = 1;

	char *num = (char *)&i;

	return (*num);
}
