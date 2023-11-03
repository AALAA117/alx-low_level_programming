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
			ptr = malloc(new_size);
		}
	}
	return (ptr);
}
