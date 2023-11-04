#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr :pointer
 * @old_size:old size
 * @new_size:..
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (malloc(new_size));
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		if (new_size == old_size)
		{
			return (ptr);
		}
		else if (new_size > old_size)
		{
			new_ptr = malloc(new_size);
			_memcpy(new_ptr, ptr, old_size);
		}
	}
	return (new_ptr);
}
/**
 * _memcpy - check the code for
 * @dest:..
 * @src:..
 * @size:..
 * Return: nothing
 */
void *_memcpy(void *dest, const void *src, unsigned int size)
{
	char *p = (char *)dest;
	const char *s = (char *)src;

	if (dest != NULL && src != NULL)
	{
		while (size--)
		{
			*(p++) = *(s++);
		}
	}
	return (dest);
}
