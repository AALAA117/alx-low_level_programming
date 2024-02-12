#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list.
 * @head:..
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
