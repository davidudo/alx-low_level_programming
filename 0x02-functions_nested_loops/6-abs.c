#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @num: type int
 * Return: absolute value of @num
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
