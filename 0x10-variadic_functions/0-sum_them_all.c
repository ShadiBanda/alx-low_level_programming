#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all its parameters
 * @n: Number of parameters passed to the function
 * @... A number of variable number of a parameters to calculate the sum of
 * Return: If n == 0 retutrn 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)

		sum += va_arg(ap, int);

		va_end(ap);

		return (sum);
	}
