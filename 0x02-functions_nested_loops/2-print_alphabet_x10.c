#include "main.h"
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j = 0;
	int i = 0;

	for (j = 0; j < 10; ++j)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}
}
