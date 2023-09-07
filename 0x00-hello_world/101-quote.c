#include <unistd.h>
/**
 * main -A program to write a line without printf and puts command
 * Return: 1 (Successful)
 */
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
