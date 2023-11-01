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

	s1 = (s1 != NULL) ? s1 : "";
	s2 = (s2 != NULL) ? s2 : "";
	while (s1[len] != '\0' || s2[len] != '\0')
	{
		len++;
	}
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[len1] != '\0')
		{
			ptr[i] = s1[len1];
			len1++;
			i++;
		}
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
