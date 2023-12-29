#include <stdio.h>
/**
 * main - entry point
 * Return: 0.
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
