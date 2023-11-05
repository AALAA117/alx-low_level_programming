#include "main.h"
/**
 * argstostr - check the code for ALX School students.
 * @ac : counts
 * @av : arguments
 * Return: string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int len = 0;
	int i = 0;
	int j;
	int k = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][len] != '\0')
		{
			len++;
		}
		ptr = malloc((len + 1) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; j < len; j++)
			{
				ptr[k] = av[i][j];
			}
			ptr[k++] = '\n';
			k++;
		}
	}
	ptr[k] = '\0';
	return (ptr);
}
