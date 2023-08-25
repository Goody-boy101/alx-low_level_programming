#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * create_node - creates a new node with the given string
 * @str: string to be stored in the node
 * @len: length of the string
 *
 * Return: a pointer to the newly created node
 */
list_t *create_node(const char *str, unsigned int len)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}
