#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 1;
	int mul = 1;
	int i = 0;
	int len = 0;
	int bin;
	char *rev;

	while (b[i] != '\0')
	{
		len++;
		if (b == NULL || (b[i] != '1' && b[i] != '0'))
		{
			return (0);
		}
		i++;
	}
	rev = malloc((sizeof(char) * len) + 1);
	i = 0;
	while (b[i] != '\0')
	{
		rev[i] = b[len - i - 1];
		i++;
	}
	rev[i] = '\0';
	i = 0;
	num = (num * (rev[i] - '0'));
	for (i = 1; i < len && rev[i] != '\0'; i++)
	{
		mul = mul * 2;
		bin = mul * (rev[i] - '0');
		num = num + bin;
	}
	free(rev);
	return (num);
}
