#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

