#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: where the memory is stored
 * @src: where the memory is copied
 * @n: number of bytes
 *
 * Return: the copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
	dest[a] = src[a];
n--;
	}
	return (dest);
}

