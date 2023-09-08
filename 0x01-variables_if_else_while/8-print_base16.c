#include <stdio.h>
/**
 * main -main funvcction
 *
 * Return: 0
 */
int main(void)
{
        int i;
	int a = 10;
	int f = 15;
        char j;

        for (i = 0 ; i < 10 ; i++)
                putchar(i + '0');
        for (j = 'a' ; j <= 'f' ; j++)
                putchar(j);
        putchar('\n');
        return (0);
}
