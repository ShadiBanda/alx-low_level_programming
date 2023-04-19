#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - print name using pointer to function
 * @name: the name given
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
