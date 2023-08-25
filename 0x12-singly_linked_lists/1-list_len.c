#include <stdlib.h>
#include "lists.h"

/**
 * custom_list_len - returns the number of elements in a linked list
 * @head: pointer to the list_t list
 *
 * Return: number of elements in the linked list
 */
size_t custom_list_len(const list_t *head)
{
	size_t count = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
