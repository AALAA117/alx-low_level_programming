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

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= argc - 1; i++)
		{
			int num = atoi(argv[i]);

			if (atoi(argv[i]) == 0)
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
