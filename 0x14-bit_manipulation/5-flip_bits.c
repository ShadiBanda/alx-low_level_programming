#include "main.h"

/**
 * flip_bits - number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, flips = 0;
	unsigned long int current;
	unsigned long int num = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = num >> j;
		if (current & 1)
			flips++;
	}

	return (flips);
}
