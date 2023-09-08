#include <stdio.h>
/**
 * main -A program to write alphabets in lowercase, follwed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
