#include "main.h"

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: NULL if malloc fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int index;
	unsigned int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (s1 != NULL)
	{
		len1 = _strlen(s1);
	}

	if (s2 != NULL)
	{
		len2 = _strlen(s2);
	}

	if (n >= len2)
	{
		n = len2;
	}
	else
	{
		new_str = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < n; index++)
	{
		new_str[index] = s1[index];
	}
	for (index = 0; index < n; index++)
	{
		new_str[len1 + index] = s2[index];
	}

	new_str[len1 + n] = '\0';
	return (new_str);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return: the length of the string
*/
int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
