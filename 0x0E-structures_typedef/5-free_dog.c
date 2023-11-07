#include "dog.h"
/**
 * free_dog - free dogs
 * @d:..
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
