#include "main.h"

/**
 * _strlen - A program that returns length of a string
 * @s: String
 * Return: length
 */
int _strlen(char *s)
{
	int longsi = 0;

	while (*s != '\0')
	{
		longsi++;
		s++;
	}
	return (longsi);
}
