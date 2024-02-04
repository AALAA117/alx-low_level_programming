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

	if (key == NULL || strcmp(key, " ") == 0)
	{
		return (0);
	}
	newnode = malloc(sizeof(hash_table_t));
	if (newnode == NULL)
	{
		return (0);
	}
	index = key_index((void *)key, ht->size);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);

}
