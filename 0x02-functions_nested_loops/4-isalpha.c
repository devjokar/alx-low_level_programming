#include "main.h"

/**
 * _isalpha - Ascertain if input is
 * an alphabet
 * @a: integer argument
 *
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int a)
{
	if ((a > 96 && a < 123) || (a > 64 && a < 91))
		return (1);
	else
		return (0);
	_putchar('\n');
}

