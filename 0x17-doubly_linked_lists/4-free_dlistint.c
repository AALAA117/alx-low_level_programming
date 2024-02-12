#include "lists.h"

/**
 * free_dlistint - check the code
 * @head:..
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
