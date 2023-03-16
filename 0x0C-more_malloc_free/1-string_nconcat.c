#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer for memory allocation
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int f, s;
	int b;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	f = 0;

	while (s1[f] != '\0')
		f++;

	s = 0;

	while (s2[s] != '\0')
		s++;

	if (n > s)
		n = s;

	b = f + n;

	a = malloc(b + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < f; i++)
	{
			a[i] = s1[i];
	}
	for (i = 0; i < s; i++)
	{
			a[s1[f] + i] = s2[i];
	}
	a[i] = '\0';
	return (a);
}
