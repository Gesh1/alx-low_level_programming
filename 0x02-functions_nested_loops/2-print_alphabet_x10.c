#include "main.h"

/**
 * main - print 10 times the alphabet in lowercase
 * return: void
 */

void print_alphabet_x10(void)
{
char c;
char i;

while (c < 10)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
c++;
}
}
