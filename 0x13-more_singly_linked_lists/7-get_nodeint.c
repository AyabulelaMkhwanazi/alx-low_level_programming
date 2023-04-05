#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function returns the nth node
 * of a linked list
 * @head: head pointer of linked list
 * @index: the index of the node, starting at 0
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current->n);
		}
	count++;
	current = current->next;
	}
	return (current);
}
