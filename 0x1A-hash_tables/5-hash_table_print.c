#include "hash_tables.h"
/**
 * hash_table_print -  prints a hash table.
 * @ht:...
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		for (i =  0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (flag > 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				flag++;
			}
		}
		printf("}\n");
	}
}

