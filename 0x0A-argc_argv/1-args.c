#include "main.h"
/**
 * main - entry point
 * @argc: count
 * @argv : values
 * Return: integer
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0;

	while (i != argc - 1)
	{
		i++;
	}
	putchar(i + '0');
	putchar('\n');
	return (0);
}
