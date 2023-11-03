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
		_memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
/**
 * _memset - allocate memory
 * @c: value
 * @len: size
 * @p: pointer
 *
 * Return: Nothing.
 */
void *_memset(void *p, int c, unsigned int len)
{
	unsigned char *s = p;

	while (len--)
	{
		*s++ = (unsigned char) c;
	}
	return (p);
}
