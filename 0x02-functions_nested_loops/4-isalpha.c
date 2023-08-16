#include "main.h"

/**
 * main - checks for alphabetic character.
 *  @c: The character to print
 *  return:Returns 1 if c is a letter, lowercase or uppercase otherwise Returns 0
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
