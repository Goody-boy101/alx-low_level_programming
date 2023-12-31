#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *prev_node = *head;

	for (unsigned int i = 0; prev_node != NULL && i < idx - 1; i++)
	{
		prev_node = prev_node->next;
	}

	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
