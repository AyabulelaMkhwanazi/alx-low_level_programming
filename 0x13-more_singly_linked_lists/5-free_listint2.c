#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 *
 * @head: pointer to a pointer to the first node of listint_t list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
