#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: key
 * @size: size
 * Return: integer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	hash_code = hash_djb2(key) % size;
	return (hash_code);
}
