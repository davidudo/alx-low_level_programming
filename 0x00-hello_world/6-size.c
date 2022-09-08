#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeOf(char));
	printf("Size of an int: %i byte(s)\n", sizeOf(int));
	printf("Size of a long int: %i byte(s)\n", sizeOf(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeOf(long long int));
	printf("Size of a float: %i byte(s)\n", sizeOf(float));
}
