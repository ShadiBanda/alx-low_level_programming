# include "main.h"
/**
 * Print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;
int i;
i = 0;
while (i < 10)
{
	ch = 'a';
	while (ch <= 'z')
	{
		-putchar(ch);
		ch++;
	}
	_putchar('\n');
	i++;
}
}
