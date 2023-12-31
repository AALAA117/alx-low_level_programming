#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: nothing
 */
void jack_bauer(void)
{
	int first_num = 0;
	int last_num = 0;
	int min = 0;
	int hour = 0;

	while (hour <= 23)
	{
		for (min = 0; min < 60; min++)
		{
			if (hour < 10 && hour != 0)
			{
				last_num++;
			}
			if (hour >= 10)
			{
				first_num = hour / 10;
				last_num = hour % 10;
			}
			if (min <= 9)
			{
				_putchar(first_num + '0');
				_putchar(last_num + '0');
				_putchar(':');
				_putchar('0');
				_putchar(min + '0');
			}
			if (min >= 10)
			{
				_putchar(first_num + '0');
				_putchar(last_num + '0');
				_putchar(':');
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			_putchar('\n');
		}
		hour++;
	}
}
