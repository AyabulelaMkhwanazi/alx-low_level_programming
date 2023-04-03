#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: pointer to the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements	= 0;

	if (h == NULL)
		printf("Linked list is empty");

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
