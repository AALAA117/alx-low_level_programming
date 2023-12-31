#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * struct dog - define a dog
 * @name : name of dog
 * @age:..
 * @owner:..
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void *_memcopy(void *dst, void *src, size_t n);
#endif
