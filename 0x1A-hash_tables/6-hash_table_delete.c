#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht:...
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *current;
	int i;

	for (i = 0; ht->array[i] != NULL; i++)
	{
		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			current = temp;
		}
		free(ht->array[i]);
	}
	free(ht);
}
