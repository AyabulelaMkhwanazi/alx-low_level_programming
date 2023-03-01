#include "main.h"

/**
 * _strncat - Function to concatenates 2 strings
 * @dest: First string
 * @src: Second string
 * @n: integer to use
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int b;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		src[b] = dest[c];
	}
	dest[c] = '\0';
	return (dest);
}
