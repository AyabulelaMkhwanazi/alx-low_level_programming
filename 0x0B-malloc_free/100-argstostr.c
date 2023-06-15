#include "main.h"

/**
 * argstostr - function concatenates all the arguments of
 * the program.
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: 0.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[length++] = av[i][j];
		}
		str[length++] = '\n';
	}
	str[length] = '\0';
	return (str);
}
