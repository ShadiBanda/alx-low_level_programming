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
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (p);
}
