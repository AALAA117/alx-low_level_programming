#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head
 * Return: integer.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}
