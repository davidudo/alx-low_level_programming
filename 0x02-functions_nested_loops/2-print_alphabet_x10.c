#include "main.h"

/**
 * print_alphabet - print lower alphabet
 *
 * Description: print_alphabet_x10 prints 
 * lower alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		_putchar('\n');
	}
}
