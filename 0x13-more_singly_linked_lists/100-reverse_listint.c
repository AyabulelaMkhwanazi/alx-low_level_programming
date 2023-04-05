#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - function reverses a linked list
 * @head: pointer to the linked list
 * Return: reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp2 = NULL;

	while (*head != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = tmp2;
	}

	*head = tmp;

	return (*head);
}
