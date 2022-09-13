#include "main.h"

/**
 * print_sign - Determine if input
 * is greater, less than or equal
 * to zero
 * @n: integer argument
 *
 * Return: 1 if greater than zero, 0 
 * if zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}

