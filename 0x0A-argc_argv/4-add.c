#include "main.h"
/**
 * main - entry point
 * @argc: count
 * @argv : values
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("%d", 0);
	}
	else
	{
		for (i = 1; i <= argc - 1; i++)
		{
			int num = strtol(argv[i], &ptr, 10);

			if (num == 0 && *ptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add = add + num;
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
