#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head
 * Return: integer
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

