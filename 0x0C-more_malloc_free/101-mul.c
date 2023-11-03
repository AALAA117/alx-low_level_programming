#include "main.h"
/**
 * main - check the code for
 * @arc:..
 * @argv:..
 *
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
	int num;
	int i;
	int result;

	if (argc > 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	else
	{
		for (i = 0; i <= argc - 1; i++)
		{
			num = atoi(argv[i]);
			if (num == 0 && *argv[i] != '0')
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				exit(98);
			}
			else
			{
				result = atoi(argv[1]) * atoi(argv[2]);
				_putchar(result + '0');
			}
		}
	}
	return (0);
}
