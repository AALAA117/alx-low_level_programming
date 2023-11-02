#include "main.h"
/**
 * _calloc - print array
 * @nmemb: number of elements
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * sizeof((void*)ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i  = 0; i < nmemb; i++)
		{
			ptr[i] = 0;
		}
	}
	return ((void*)ptr);
}
