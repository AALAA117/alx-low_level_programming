#include "main.h"
/**
 * main - check the code for
 * @n: number
 * Return : nothing
 */
void digit(int n);
int main(int argc, char *argv[])
{
	int result, i;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = argv[1];
		num2 = argv[2];
		i = 0;
		while (num1[i] != '\0' || num2[i] != '\0')
		{
			if (!isdigit(num1[i]) || !isdigit(num2[i]))
			{
				printf("Error\n");
				exit(98);
			}
			i++;
		}
		result = atoi(num1) * atoi(num2);
		digit(result);
	}
	_putchar('\n');
	return (0);
}
/**
 * digit - get number
 * @n: number
 * Return: nothing
 */
void digit(int n)
{
	int r;

	if (n == 0)
	{
		return;
	}
	else
	{
		r = n % 10;
		digit(n / 10);
		_putchar(r + '\0');
	}
}
