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
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
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
		while (n != 0 && s2[len2] != '\0')
		{
			ptr[i] = s2[len2];
			len2++;
			i++;
			n--;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
