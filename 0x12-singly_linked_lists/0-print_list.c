#include "lists.h"

/**
 * print_list - returns the number of nodes
 * @h: struct list_s
 *
 * Returns: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count += 1;
	}

	return (count);
}
