#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: character to use
 *
 * Return: pointer to the array, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		i++;
		str[i] = c;
	}
	return (str);
}
