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
	listint_t *current = *head;
	listint_t *ptr;

	if (*head == NULL || head == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	*head = NULL;
}
