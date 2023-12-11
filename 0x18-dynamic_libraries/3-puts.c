#include "main.h"
/**
 * _puts - A program to print strings with new line
 * @str: function parameter
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
