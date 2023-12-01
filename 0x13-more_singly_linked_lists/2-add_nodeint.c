#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head:..
 * @n:..
 * Return: address of first element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
