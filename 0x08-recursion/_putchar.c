#include "main.h"

/**
 * _putchar - function writes the character c to stdout
 * @c: the character to print
 * Return: 1 on success, else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
