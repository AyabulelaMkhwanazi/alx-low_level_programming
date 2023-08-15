#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function prints struct dog
 *
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
