#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * return: 0
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*My own code goes there*/
	digit = n % 10; /*Get's the last digit*/
	
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}
