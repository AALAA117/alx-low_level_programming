#include "main.h"
/**
 * strtow- Prints an array of string
 * @str: The array to print
 *
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **ptr;
	int i;
	int len = 0;
	char str1[] = "";

	if (str == NULL || str == str1)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		len++;
	}
	ptr = malloc(len + 1);
	if  (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len + 1; ++i)
		{
			if (str[i] != ' ')
			{
				*ptr[i] = str[i];
				free(*ptr);
			}
			else
			{
				free(*ptr);
			}
		}
		ptr[i] = "NULL";
	}
	return (ptr);
}
