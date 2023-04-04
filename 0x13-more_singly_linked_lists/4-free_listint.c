#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function frees a linked list
 * @head: pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
