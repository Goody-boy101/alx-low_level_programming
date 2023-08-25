#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	if (!str)
		return (NULL);

	unsigned int len = strlen(str);
	list_t *new_node = create_node(str, len);

	if (!new_node)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
