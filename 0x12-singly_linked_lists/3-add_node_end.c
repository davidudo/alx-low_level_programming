#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t
 * @head: first node
 * @str: data to be added
 *
 * Return: address of first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	size_t str_len;

	last = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	str_len = 0;
	while (*str != '\0')
	{
		str++;
		str_len++;
	}

	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (*head);
}
