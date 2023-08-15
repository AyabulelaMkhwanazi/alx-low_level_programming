#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - function creates a new dog.
 *
 * @name: pointer to the name of the new dog
 * @age: age of the new dog
 * @owner: pointer to the new dog's owner name
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = _strdup(name);

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	dog->owner = _strdup(owner);

	if (!dog->owner)
	{
		free(dog);
		return (NULL);
	}
	return (dog);

}

/**
 * _strdup - function duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *new_s;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	new_s = malloc(sizeof(char *) * (length + 1));

	if (new_s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		new_s[i] = str[i];
	}
	new_s[i] = '\0';
	return (new_s);
}
