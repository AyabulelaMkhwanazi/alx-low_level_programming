#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function concatenates all the arguments of program
 * @ac: input
 * @av: pointer to a pointer
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, k, j, m;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		if (str[k] == '\0')
		{
			str[k] = '\n';
			k++;
		}
	}
	return (str);
}
