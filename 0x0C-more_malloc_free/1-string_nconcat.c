#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len = 0;
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	while (s2[len] != '\0' || s1[len] != '\0')
	{
		len++;
	}
	ptr = malloc((len) * sizeof(char));
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
		while (n--)
		{
			ptr[i] = s2[len2];
			len2++;
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
