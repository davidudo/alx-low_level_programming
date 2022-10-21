#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t
 * @head: first node
 * @str: data to be added
 *
 * Return: address of new node
 * If operation fails, return NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len;

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
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
