#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function frees a linked list
 * @head: pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
