#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit
 * @n: number parameter
 * @index: index
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

