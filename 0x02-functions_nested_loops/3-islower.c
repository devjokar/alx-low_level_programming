#include "main.h"

/**
 * _islower - Check if parameter is lowercase
 * @a: integer argument
 *
 * Return: 1 for lowercase, 0 otherwise
 */
int _islower(int a)
{
	if (a > 96 && a < 123)
		return (1);
	else
		return (0);
	_putchar('\n');
}

