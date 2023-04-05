#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *top = head;
	listint_t *low = head;

	if (head == NULL)
		return (NULL);


	while (low && top && top->next)
	{

		top = top->next->next;
		low = low->next;

		if (top == low)
		{
			low = head;

			while (low != top)
			{
				low = low->next;
				top = top->next;
			}
			return (top);
		}
	}
	return (NULL);
}

