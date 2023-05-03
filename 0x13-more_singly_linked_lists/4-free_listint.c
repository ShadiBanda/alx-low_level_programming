#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
