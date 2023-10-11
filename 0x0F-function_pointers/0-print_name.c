#include "function_pointers.h"

/**
 * print_name - A program that prints a name
 * @name: Where value of name is stored
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
