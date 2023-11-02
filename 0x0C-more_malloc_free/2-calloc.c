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
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(ptr, 0, sizeof(int) * size);
	}
	return (ptr);
}
