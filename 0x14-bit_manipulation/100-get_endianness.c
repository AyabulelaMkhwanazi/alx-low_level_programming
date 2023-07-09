#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	unsigned long int i = 1;
	char *c = (char *) &i;

	return (*c);
}
