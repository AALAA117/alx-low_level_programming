#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	p = malloc(sizeof(*p) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
