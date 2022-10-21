#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to struct list_s
 *
 * Return: number of elements in a linked list list_s
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
