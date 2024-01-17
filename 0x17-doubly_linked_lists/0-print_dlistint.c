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
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
