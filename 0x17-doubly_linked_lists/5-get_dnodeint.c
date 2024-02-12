#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head:..
 * @index:..
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int no_of_nodes;
	dlistint_t *ptr = NULL;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		no_of_nodes++;
	}
	if (index > (no_of_nodes - 1))
	{
		return (NULL);
	}
	else
	{
		ptr = head;
		for (i = 0; i != index; i++)
		{
			ptr = ptr->next;
		}
		return (ptr);
	}
}
