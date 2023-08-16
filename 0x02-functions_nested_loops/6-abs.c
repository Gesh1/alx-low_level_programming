#include "main.h"

/**
 * main - computes the absolute value of an integer.
 *  @c: The character to print
 *  return: absolute value of number or 0
 */

 int _abs(int c)
{
if (c < 10)
{
int abs_val;
abs_val = c * -1;

return (abs_val);
}
return (c);
}
