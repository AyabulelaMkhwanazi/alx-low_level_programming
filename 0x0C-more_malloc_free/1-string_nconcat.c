#include "main.h"

int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);

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
	unsigned int index, j;
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
	else if (n < len2)
	{
		new_str = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (new_str == NULL)
	{
		return (NULL);
	}

	_strncpy(new_str, s1, len1);

	_strncpy(new_str + len1, s2, n);

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

/**
 * _strncpy - function copies a string
 *
 * @dest: pointer to the destination string to copy to
 * @src: pointer to the source string to copy from
 * @n: number of bytes to copy from src
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
