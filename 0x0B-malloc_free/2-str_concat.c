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

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}
	while (*(s2 + len) != '\0' || *(s1 + len) != '\0')
	{
		len++;
	}
	ptr = malloc(len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(s1 + len) != '\0')
		{
			len1++;
		}
		while (*(s2 + len2) != '\0' && len1 < 97 && len2 < len1)
		{
			ptr[len1] = s2[len2];
			len2++;
			len1++;
		}
	}
	ptr[len1] = '\0';
	return (ptr);
}
