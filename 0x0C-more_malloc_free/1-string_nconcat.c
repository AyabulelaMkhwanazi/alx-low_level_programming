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
	char *ptr;
	unsigned int i;
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

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		_strncpy(ptr, s1, len1);
	}
	if (s2 != NULL)
	{
		_strncpy(ptr + len1, s2, len2);
	}

	ptr[len1 + len2] = '\0';
	return (ptr);
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
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}