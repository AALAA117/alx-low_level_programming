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

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	while (**av != '\0')
	{
		len++;
		av = (av + 1);
	}
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= ac - 1)
		{
			ptr[i] = *av[i];
		}
	}
	return (ptr);
}


