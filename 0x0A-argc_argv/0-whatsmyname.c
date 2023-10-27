#include "main.h"
/**
 * main - entry point
 * @argc: counter
 * @argv: values
 * Return: integer
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;
	while (*argv[i] != '\0')
	{
		_putchar(*argv[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
