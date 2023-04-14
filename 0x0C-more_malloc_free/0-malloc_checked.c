#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memeory using malloc
 * @b: number of bytes to allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
