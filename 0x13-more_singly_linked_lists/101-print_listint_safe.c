#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - function prints number of
 * nodes of a linked list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int numNodes = 0;

	if (head == NULL)
		exit (98);

	while (head != NULL)
	{
		numNodes++;
		head = head->next;
	}
	return (numNodes);
}
