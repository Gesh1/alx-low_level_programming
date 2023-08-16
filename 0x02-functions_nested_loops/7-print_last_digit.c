#include "main.h"

/**
 * main - prints the last digit of a number.
 *  @c: The character to print
 *return: value of last digit
 */

 int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last +'0');
return (last);
}
