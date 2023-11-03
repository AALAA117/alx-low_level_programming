#include "main.h"
/**
 * main - check the code for
 * @argc:..
 * @argv:..
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num;
	int i;
	int result;
	int tens, ones;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (i = 0; i <= argc - 1; i++)
		{
			num = atoi(argv[i]);
			if (num == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				exit(98);
			}
			else
			{
				result = atoi(argv[1]) * atoi(argv[2]);
				if (result >= 10)
				{
					tens = result / 10;
					ones = result % 10;
					_putchar(tens + '0');
					_putchar(ones + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(result + '0');
					_putchar('\n');
				}
			}
		}
	}
	return (0);
}
