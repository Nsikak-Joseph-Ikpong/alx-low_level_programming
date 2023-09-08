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

        for (i = 0 ; i < 16 ; i++)
                 putchar((i < 10) ? (i + '0') : ('a' + i - 10));
    putchar('\n');

    return 0;
}
