#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed through the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;
	char *str;

	va_start(argList, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argList, char *);

		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argList);
}
