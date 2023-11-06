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

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
	return (ptr);
}

