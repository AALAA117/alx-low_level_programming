#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string need to be copied
 * Return: string.
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	ptr = malloc(len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			*(ptr + i) = *(str + i);
		}
		i++;
		ptr[i] = '\0';
	}
	return (ptr);
}
