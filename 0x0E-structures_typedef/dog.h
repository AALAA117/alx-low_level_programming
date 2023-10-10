#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "dog.h"
/**
 * struct dog - represent a dog.
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
