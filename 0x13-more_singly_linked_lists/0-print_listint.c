#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
