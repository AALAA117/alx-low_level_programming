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
	int j = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
		{
			;
		}
		ptr = malloc((len + 1) * sizeof(*ptr));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr[j] = av[i][len];
			putchar('\n');
			j++;
		}
	}
	return (ptr);
}
