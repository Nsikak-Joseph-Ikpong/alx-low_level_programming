#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A program that returns the sum of all its parameters
 * @n: Variable to hold parameters
 * @...:A variable number of parameters to calculate the sum o
 * Return: 0 or sum of parametrs
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
