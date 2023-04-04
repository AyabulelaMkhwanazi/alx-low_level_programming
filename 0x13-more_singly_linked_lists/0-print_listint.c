#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function prints all the elements of a listint_t list
 * @h: pointer to the listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		numNodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (numNodes);
}
