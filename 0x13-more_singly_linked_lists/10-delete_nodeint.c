#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *previous = NULL;

	for (unsigned int i = 0; temp != NULL && i < index - 1; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		previous->next = current->next;
		free(current);
	}

	return (1);
}
