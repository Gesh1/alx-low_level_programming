#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if number is positive,negetive or zero.
 *
 * return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
       	{
	 printf("%d is positive \n");
	}
        else if (n==0)
	{
	printf("%d is zero \n");
	}
       els (n < 0) 
       {
       printf("%d is negetive \n");	       
	return (0);
}
