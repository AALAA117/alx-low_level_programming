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
	int n_len, o_len;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	n_len = strlen(name);
	ptr->name = malloc((n_len + 1) * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	o_len = strlen(owner);
	ptr->owner = malloc((o_len + 1) * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
