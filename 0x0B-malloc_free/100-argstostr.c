#include "main.h"
/**
 * argstostr - check the code for ALX School students.
 * @ac : counts
 * @av : arguments
 * Return: string.
 */
char *argstostr(int ac, char **av);
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
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	ptr = malloc((len + ac + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				ptr[k] = av[i][j];
				j++;
				k++;
			}
			ptr[k] = '\n';
			k++;
		}
	}
	ptr[k] = '\0';
	return (ptr);
}
