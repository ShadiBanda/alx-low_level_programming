#include "lists.h"

/**
 * print_listint - all elements to stdout
 *
 * @h: pointer
 *
 * Return: return an int
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *s;
	unsigned int num = 0;

	s = h;
	while (s)
	{
		printf("%d\n", s->n);
		num++;
		s = s->next;
	}
	return (num);
}
