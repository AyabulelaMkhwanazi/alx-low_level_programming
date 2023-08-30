#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at index of a listint_t
 * linked list.
 *
 * @head: pointer to a pointer of listint_t list.
 * @index: the index of the node that should be deleted.
 * index starts at 0.
 *
 * Return: 1 On success.
 * -1 on failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *ptr2 = *head;
	listint_t *new_node;
	unsigned int i;

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}

	ptr = *head;

	for (i = 0; ptr != NULL && i < index - 1; i++)
	{
		ptr = ptr->next;
	}

	if (ptr == NULL || ptr->next == NULL)
	{
		return (-1);
	}

	new_node = ptr->next->next;
	free(ptr->next);
	ptr->next = new_node;
	return (1);
}
