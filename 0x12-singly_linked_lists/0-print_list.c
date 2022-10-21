#include "lists.h"

int _strlen(char *s);

size_t print_list(const list_t *h)
{
	size_t count;
	int str_length;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		str_length = _strlen(h->str);
		printf("[%d] %s\n", str_length, h->str);
		h = h->next;
		count += 1;
	}

	return (count);
}

/**
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
