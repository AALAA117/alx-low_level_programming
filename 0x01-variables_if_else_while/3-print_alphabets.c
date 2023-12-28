#include <stdio.h>
/**
 * main - entry point
 * Return: 0;
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	c = 97;
	while (c <= 122)
	{
		putchar(c - 32);
		c++;
	}
	putchar('\n');

	return (0);
}
