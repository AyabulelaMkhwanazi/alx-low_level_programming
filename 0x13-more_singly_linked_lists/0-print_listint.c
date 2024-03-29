#include "lists.h"

/**
 * print_listint - function prints all the elements of a listint_t list.
 *
 * @h: pointer to listint_t list.
 *
 * Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
