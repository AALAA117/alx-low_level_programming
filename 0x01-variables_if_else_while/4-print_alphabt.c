#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
