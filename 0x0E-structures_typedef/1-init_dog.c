#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d:..
 * @name:..
 * @age:..
 * @owner:..
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
