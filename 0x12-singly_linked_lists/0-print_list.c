#include "lists.h"

/**
 * print_list - prints all the elements of linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;


	while (temp)
	{
		if (temp->str)
			printf("[%u]%s\n", temp->len, temp->str);
		else
			printf("[0](nil)\n");
		temp = temp->next;
		count++;

	}
	return (count);
}
