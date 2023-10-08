#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a program to allocate memory of san array
 * @nmemb: number of array numbers
 * @size: size of array
 * Return: pointer ro newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	ELSE
		return (output);

}
