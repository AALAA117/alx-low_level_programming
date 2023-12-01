#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head:..
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

