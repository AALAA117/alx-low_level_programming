#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d:..
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
		printf("Age: %f\nOwner: %s\n", (*d).age, (*d).owner);
	}
	if (d->owner == NULL)
	{
		printf("owner: %s\n", "(nil)");
		printf("Name: %s\nAge: %f\n", (*d).name, (*d).age);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}

