#include "lists.h"

/**
 * add_node - function adds a new node at the end of a list_t list.
 *
 * @head: pointer to pointer to the first node (head) of list_t list.
 * @str: string to be added.
 *
 * Return: new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
	list_t *last;
	unsigned int len = 0;


	while (str[len] != '\0')
	{
		len++;
	}

	node_end = malloc(sizeof(list_t));

	if (node_end == NULL)
	{
		return (NULL);
	}

	node_end->str = strdup(str);
	node_end->len = len;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
			last->next = node_end;
		}
	}
	return (node_end);
}
