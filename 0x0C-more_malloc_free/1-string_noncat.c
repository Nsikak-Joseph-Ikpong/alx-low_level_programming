iinclude "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A program that concatenates two strings
 * @s1: string
 * @n: function parameter
 * @s2: string
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int s1len = 0;
	int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	output = malloc(sizeof(char) * (s1len + n + 1);
	if (output == NULL)
		return (NULL);
	if  (n >= s2len)
	{
		for (i = 0; s1[1] != '\0'; i++)
		output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
		output[s1len + i] = s2[i] = s2[i];
		output[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[s1len + i] = s2[i];
		output[s1len + i] = '\0';
	}
	return (output);

