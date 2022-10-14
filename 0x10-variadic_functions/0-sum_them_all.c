#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters the function has
 *
 * Return: sum of all the parameters
 * If n = 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;
	int sum;

	if (n == 0)
		return(0);

	va_start(argList, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(argList, int);

	va_end(argList);

	return (sum);
}
