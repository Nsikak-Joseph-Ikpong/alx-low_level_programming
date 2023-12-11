#include "main.h"
/**
 * _isupper - A program to check if c is uppercase or  lower case
 *@c: function parameter
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
