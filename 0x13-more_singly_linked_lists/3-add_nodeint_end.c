#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function adds a new node at the end of a linked list
 * @head: pointer to the linked list
 * @n: integer
 * Return: new pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prt;
	listint_t *temp;

	prt = *head;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (prt->next != NULL)
	{
		prt = prt->next;
	}
	prt->next = temp;

	return (temp);

}
