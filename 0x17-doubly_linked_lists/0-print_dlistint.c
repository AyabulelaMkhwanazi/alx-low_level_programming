#include "lists.h"

/**
 * print_dlistint - function prints all the elements of dlistint_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
