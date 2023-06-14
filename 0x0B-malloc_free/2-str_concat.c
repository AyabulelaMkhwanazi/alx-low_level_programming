#include "main.h"

/**
 * str_concat - function concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int s = 0;
	int d;
	int x;

	if (s1 == NULL)
		s1 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	if (s2 == NULL)
		s2 = "";

	while (s2[s] != '\0')
	{
		s++;
	}

	s3 = malloc(sizeof(char) * (i + s + 1));

	if (s3 == NULL)
		return (NULL);

	for (d = 0; d < i; d++)
	{
		s3[d] = s1[d];
	}
	for (x = 0; x < s; x++)
	{
		s3[i + x] = s2[x];
	}
	s3[i + s] = '\0';

	return (s3);
}
