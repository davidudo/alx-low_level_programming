#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @num: type integer, could be negative or positive
 * Description: Checks if a number is positive or negative
 * Return: 1 if '+', 0 if 0, and -1 if '-'
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
