#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht:pointer to table
 * @key:..
 * @value:..
 * Return: 1 in success and 0 in fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	int index;

	if (ht == NULL || key == NULL || strcmp(key, " ") == 0)
	{
		return (0);
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode);
		return (0);
	}
	index = key_index((void *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		newnode->next = NULL;
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);

}
