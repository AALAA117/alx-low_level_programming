#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(hash_table_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size);
	if (p->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p->array[i] = NULL;
	}
	return (p);
}
