#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning
 * of a listint_t list.
 *
 * @head: pointer to pointer to the first node (head) of listint_t list.
 *
 * Return: new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}