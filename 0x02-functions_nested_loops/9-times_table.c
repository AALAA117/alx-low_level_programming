#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Retrun: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int mul = 0, first_dig =0, last_dig = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul >= 10)
			{
				first_dig = mul / 10;
				last_dig = mul % 10;
				_putchar(first_dig + '0');
				_putchar(last_dig + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(32);
				}
			}
			else
			{
				_putchar(mul + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
