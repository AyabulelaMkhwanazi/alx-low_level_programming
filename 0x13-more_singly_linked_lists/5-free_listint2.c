#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function frees a linked list
 * @head: pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *aux;

	while (tmp != NULL)
	{
		aux = tmp;
		tmp = tmp->next;
		free(aux);
	}
	*head = NULL;
}
