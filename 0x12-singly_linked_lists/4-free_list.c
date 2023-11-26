#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;
	if (head)
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
	}
}
