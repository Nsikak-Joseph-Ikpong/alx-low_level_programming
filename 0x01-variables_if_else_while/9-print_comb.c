#include <stdio.h>
/**
 * main -A program that printts all combinations of numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
