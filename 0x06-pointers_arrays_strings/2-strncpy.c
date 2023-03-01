#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: first pointer
 * @src: second pointer
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
