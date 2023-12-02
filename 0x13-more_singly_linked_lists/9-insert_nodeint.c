#include "lists.h"

/**
 * insert_nodeint_at_index - deletes the node at index index of a linked list.
 * @head:..
 * @idx:..
 * @n:..
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2;
	unsigned int count = 0, i;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 != NULL)
	{
		return (NULL);
	}
	ptr2->n = n;
	ptr2->next = NULL;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	count--;
	if (idx > (count + 1))
	{
		return (NULL);
	}
	else
	{
		ptr = *head;
		if (idx == (count + 1))
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = ptr2;
		}
		else
		{
			ptr = *head;
			for (i = 0; i <= (idx - 1); i++)
			{
				ptr = ptr->next;
			}
			ptr2->next = ptr->next;
			ptr->next = ptr2;
		}
	}
	free(ptr2->next);
	free(ptr2);
	return (ptr->next);
}
