#include "main.h"
/**
 * _islower - tests whether a character is a lowercase letter from the English alphabet.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
