#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	printf("size of a long int %d byte(s)\n", sizeof(long int));
	printf("size of a long long int %d byte(s)\n", sizeof(long long int));
    return (0);
}
