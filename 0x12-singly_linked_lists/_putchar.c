#include "lists.h"

/**
 * _putchar - writes the charracter c to stdout
 * @c: The character to print
 * Return: On succes 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
