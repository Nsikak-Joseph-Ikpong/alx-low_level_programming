#include "main.h"

/**
 * swap_int - A program to swap two integers
 * @a: function parameter
 * @b: function parameter
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
