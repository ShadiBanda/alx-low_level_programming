#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by new line
 * @separator: The string to be printed between the numbers
 * @n: The numbers of integers passed to the function
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	
	printf("\n");
	
	va_end(nums);
}
