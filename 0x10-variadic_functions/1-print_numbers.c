#include "variadic_functions.h"
/**
 * print_numbers - A functions that prints numbers
 * @separator: string to be printed
 * @n: numbers of integers to be passed to the function
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int comm;

	va_start(ap, n);

	for (comm = 0; comm < n; comm++)
	{
		printf("%d", va_arg(ap, int));

		if (comm != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

