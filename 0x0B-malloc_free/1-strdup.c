#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: string to use.
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int s = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (s = 0; s <= i; s++)
	{
		arr[s] = str[s];
	}
	return (arr);
}
