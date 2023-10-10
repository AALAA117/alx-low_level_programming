#include <stdio.h>
#include "dog.h"
/**
 * init_dog - unction that initialize a variable of type struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * @d: address of variable.
 * @struct dog *d: variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
