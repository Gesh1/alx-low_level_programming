#include "main.h"

/**
 * main -  checks for lowercase character.
 *  @c: The character to print
 *  return: Returns 1 if c is lowercase or Returns 0 otherwise
 */

 int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
