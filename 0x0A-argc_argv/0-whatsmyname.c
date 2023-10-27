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
	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		*argv[0]++;
	}
	_putchar('\n');
	return (0);
}
