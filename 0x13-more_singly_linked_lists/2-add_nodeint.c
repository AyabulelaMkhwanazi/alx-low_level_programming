#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function adds a new node at the beginning of
 * a linked list
 * @head: pointer to the linked list
 * @n: integer
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *prt;

	prt = malloc(sizeof(listint_t));

	if (!prt)
		return (NULL);

	prt->n = n;
	prt->next = NULL;

	prt->next = *head;
	*head = prt;

	return (prt);
}
