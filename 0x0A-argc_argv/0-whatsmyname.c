#include "main.h"
/**
 * main - entry point
 * @argc: counter
 * @argv: values
 * Return: integer
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		putchar(*argv[0]);
		argv[0] = (argv[0] + 1);
	}
	putchar('\n');
	return (0);
}
