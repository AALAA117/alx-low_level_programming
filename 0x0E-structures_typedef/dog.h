#ifndef DOG_H
#define DOG_H
#define NIL (nil)
#include <stdio.h>
#include "dog.h"
/**
 * struct dog - define a dog
 * @name : name of dog
 * @age:..
 * @owner:..
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
