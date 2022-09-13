#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 *
 * @num: type int
 * 
 * Return: return value of last digit
 */
int print_last_digit(int num)
{
	int r;

	if (num < 0)
	{
		r = -1 * (num % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = num % 10;
		_putchar(r + '0');
		return (r);
	}
}
