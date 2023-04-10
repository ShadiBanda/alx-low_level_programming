#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argv; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
