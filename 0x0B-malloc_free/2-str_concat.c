#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strncpy - copies a content of a string to another string
 *
 * @dest: pointer to new string (destination string)
 * @src: pointer to the old string (source string)
 * @n: number of bytes to be copied from s1 to dest
 *
 * Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (src == NULL)
	{
		return (0);
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	do {
		dest[i] = '\0';
		i++;
	} while (i < n);

	return (dest);

}

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: on success, concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	char *new_str;

	if (s1 != NULL)
	{
		length1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		length2 = _strlen(s2);
	}

	new_str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		_strncpy(new_str, s1, length1);
	}
	if (s2 != NULL)
	{
		_strncpy(new_str + length1, s2, length2);
	}
	new_str[length1 + length2] = '\0';
	return (new_str);

}
