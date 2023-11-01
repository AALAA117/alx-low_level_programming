#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string.
 * @s2: string.
 * Return: string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0;
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	while (s1[len1] != '\0')
	{
		len++;
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len++;
		len2++;
	}
	len--;
	ptr = malloc(len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		len1 = 0;
		while (s1[len1] != '\0')
		{
			ptr[i] = s1[len1];
			len1++;
			i++;
		}
		len2 = 0;
		while (s2[len2] != '\0')
		{
			ptr[i] = s2[len2];
			len2++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
