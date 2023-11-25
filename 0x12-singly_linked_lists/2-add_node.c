#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address of head
 * @str: string.
 * Return: adddress of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
