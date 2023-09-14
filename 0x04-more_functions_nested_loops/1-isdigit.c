#include "main.h"
/**
 * _isdigit - A program to check if c i digit and return 0 or 1
 * @c: Function parameter
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
