#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - entry point
 * Return: (success)
 */

int main(void)

{
	char low;
	char upper;

	for (low = 'a' ; low <= 'z' ; low++)
	putchar(low);

	for (upper = 'A' ; upper <= 'Z' ; upper++)
	putchar(upper);
	putchar('\n');

	return 0;

}
		
