#includee "main.h"
/**
 * print_numbers - A program to print 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i * '0');
	return (0);
}
