#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function deletes the head node of a linked list
 * and returns the head node's data (n)
 * @head: pointer to head node
 * Return: data (n) of the deleted node or 0 if empty;
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int c;

	if (head == NULL)
		return (0);
	
	c = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (c);
}
