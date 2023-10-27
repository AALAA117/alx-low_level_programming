#include "main.h"
/**
 * main - entry point
 * @argc: count
 * @argv: values
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
