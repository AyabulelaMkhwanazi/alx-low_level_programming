#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: contatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int f = 0;
	int a = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	f = 0;
	a = 0;

	while (s1[f] != '\0')
		f++;

	while (s2[a] != '\0')
		a++;

	str = malloc(sizeof(char) * (f + a + 1));

	if (str == NULL)
		return (NULL);

	f = 0;
	a = 0;

	while (s1[f] != '\0')
	{
		str[f] = s1[f];
		f++;
	}
	while (s2[a] != '\0')
	{
		str[f] = s2[a];
		f++;
		a++;
	}
	str[f] = '\0';
	return (str);
}
