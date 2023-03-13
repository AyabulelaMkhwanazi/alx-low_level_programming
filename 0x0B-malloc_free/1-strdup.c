#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	a = (char *)malloc((sizeof(char) * length) + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		a[i] = str[i];
		a[length] = '\0';
	}
	return (a);
}

