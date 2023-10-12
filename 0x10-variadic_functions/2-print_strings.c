#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * @separator: A string to be printed between the strings
 * @n: number of strings to the function
 * @...: A variable number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && searator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
