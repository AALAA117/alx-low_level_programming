#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name:..
 * @age:..
 * @owner:..
 * Return: structure pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;
	struct dog *p;
	struct dog *c;
	int i, j;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL || p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (owner[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(struct dog));
	ptr->name = malloc((i + 1) * sizeof(char));
	ptr->name = name;
	_memcopy(&p, &ptr, (i + 1) * sizeof(char));
	ptr->owner = malloc((j + 1) * sizeof(char));
	ptr->owner = owner;
	_memcopy(&c, &ptr, (j + 1) * sizeof(char));
	return (ptr);
}
/**
 * _memcopy - copy
 * @dst:..
 * @src:..
 * @n:..
 *
 * Return: nothing
 */
void *_memcopy(void *dst, void *src, size_t n)
{
	k = 0;
	while (k < n)
	{
		dst[k] = src[k];
		k++;
	}
	return (dst);
}
