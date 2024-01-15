#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head:..
 * @n: ..
 * we do not free memory cause it will delete prev and next.
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->prev = NULL;
	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
	}
	else
	{
		(*head)->prev = ptr;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
