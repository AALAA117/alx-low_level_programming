#include "main.h"
/**
 * main - the function _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	for (i = 0; i <= sizeof(c); i++)

		_putchar(c[i]);

	_putchar('\n');
	return (0);
}
