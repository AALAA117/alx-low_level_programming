#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name:..
 * @age:..
 * @owner:..
 * Return: structure pointer.
 */
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;
	int i, j;
	size_t k;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	ptr->name = malloc((i + 1) * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < ((i + 1) * sizeof(char)); k++)
	{
		ptr->name[k] = name[k];
	}
	ptr->name[k] = '\0';
	ptr->owner = malloc((j + 1) * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < ((j + 1) * sizeof(char)); k++)
	{
		ptr->owner[k] = owner[k];
	}
	ptr->owner[k] = '\0';
	ptr->age = age;
	return (ptr);
}
