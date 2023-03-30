#include <stdio.h>
#include <string.h>
/**
 * main - Appends the src string to the dest string
 *
 * Return: Always 0
 */
int main(void)
{
	char str1[20] = "src";
	char str2[] = "dest";

	strcat(str1, str2);

	printf("%s", str1);

	return (0);
}
