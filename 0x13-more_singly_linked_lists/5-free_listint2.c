#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head:..
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current = (*head)->next;
			free(*head);
			*head = current;
		}
	}
}
