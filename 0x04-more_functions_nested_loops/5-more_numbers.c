#include "main.h"
/**
 * more_numbers - A program to print numbers
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (z = 0 ; z <= 14 ; z++)
		{
			if (z > 9)
				_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}

