#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to search in s
 * Return: address (success), else NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
