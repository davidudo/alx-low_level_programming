#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;

	va_start(argList, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argList, unsigned int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argList);
}
