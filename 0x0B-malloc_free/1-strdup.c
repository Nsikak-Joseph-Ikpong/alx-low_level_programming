#include "main.h"
/**
 * _strdup - copies strings to newly allocated spaces in memory
 * @str: strings to copy to new memory
 * Return: pointers to new memory
 */
char *_strdup(char *str)
{
	char *copy;
	int counnt = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = mallock(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
