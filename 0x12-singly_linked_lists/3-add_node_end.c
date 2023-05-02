#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  new node at the end of a list_t list at the end
 * @head: pointer to start of the list
 * @str: String to copy to str node of list_t item
 *
 * Return: address of new element, NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
