#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of  linked list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int  num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{

			printf("[0] (nil)\n");
			num++;
			h = h->next;
			continue;
		}

		printf("[%d} %s\n", h->len, h->str);
		num++;
		h = h->next;
	}

	return (num);
}
