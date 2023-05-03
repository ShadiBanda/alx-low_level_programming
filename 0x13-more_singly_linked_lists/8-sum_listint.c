#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Entry point
 *
 * @head: pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
