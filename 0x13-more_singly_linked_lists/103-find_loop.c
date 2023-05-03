#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a listint_t linked list
 *
 * @head: A pointer to the head
 *
 * Return: address of node where loop starts/returns, NULL if not in loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *finish;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	finish = (head->next)->next;

	while (finish)
	{
		if (slow == finish)
		{
			slow = head;

			while (slow != finish)
			{
				slow = slow->next;
				finish = finish->next;
			}

			return (slow);
		}

		slow = slow->next;
		finish = (finish->next)->next;
	}

	return (NULL);
}
