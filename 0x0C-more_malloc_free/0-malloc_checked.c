#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A program to allocate memory using malloc
 * @b: function parameter
 * Return: pointer to the allocated memoiry
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
