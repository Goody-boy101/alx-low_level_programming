#include <stdlib.h>

#include "lists.h"

/**

 * list_len - returns the number of elements in a linked list

 * @h: pointer to the list_t list

 *

 * Return: number of elements in h

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
