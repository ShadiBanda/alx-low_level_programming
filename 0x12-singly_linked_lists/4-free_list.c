#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: head of linked list
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((head) != NULL)
	{

		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}