#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A program to create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
