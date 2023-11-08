#include "function_pointers.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
