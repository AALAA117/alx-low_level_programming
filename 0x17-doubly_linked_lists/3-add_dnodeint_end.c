#include "lists.h"
/**
 * add_dnodeint_end -adds a new node at the end of a dlistint_t list.
 * @head: address of head pointer
 * @n:..
 * Return: pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	if (*head == NULL)
	{
		(*new_node).prev = NULL;
		(*new_node).next = NULL;
		*head = new_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		(*ptr).next = new_node;
		(*new_node).prev = ptr;
		(*new_node).next = NULL;
	}
	return (*head);
}
