#include "main.h"

/**
 * string_nconcat - function concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: bytes of memory.
 *
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (n < j)
	{
		str = malloc(sizeof(char) * (i + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (i + j + 1));
	}

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0' && n > j)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
