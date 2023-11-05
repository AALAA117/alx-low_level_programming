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
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	s1 = (s1 != NULL) ? s1 : "";
	s2 = (s2 != NULL) ? s2 : "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s1[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc((len1 + len2 + 2) * sizeof(char));
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
