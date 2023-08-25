#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (h->str)
			printf("Node[%1u]: %s\n", num_nodes, h->str);
		else
			printf("Node[%1u]: (nil)\n", num_nodes);

		h = h->next;
		num_nodes++;
	}

	(return num_nodes;)
}
