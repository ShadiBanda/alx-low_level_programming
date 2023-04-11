#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <limits.h>

/**
 * main - priints the sum
 * @argc: argument count
 * @argv: argument count
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		long num = strtol(argv[i], &ptr, 10);

		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		if (sum + num > INT_MAX)
		{
			printf("Error\n");
			return (1);
		}

		sum += (int) num;
	}

	printf("%d\n", sum);
	return (0);
}
