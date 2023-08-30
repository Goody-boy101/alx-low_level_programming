#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		printf("Adding %d to sum\n", temp->n);
		sum += temp->n;
		temp = temp->next;
	}

	printf("Final sum: %d\n", sum);
	return (sum);
}
