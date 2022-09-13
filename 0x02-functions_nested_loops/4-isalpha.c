#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 *
 * ch: type char
 *
 * Description: return 1 if ch is a character else 0
 *
 * Return: 1 or 0
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
