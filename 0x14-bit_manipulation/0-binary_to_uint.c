#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j;

	if (b == NULL)
		return (0);

	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		num = num * 2 + (b[j] - '0');
		j++;
	}
	return (num);
}
