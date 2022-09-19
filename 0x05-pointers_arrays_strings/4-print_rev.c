#include "main.h"

/**
 * print_rev - displays a string, in reverse, followed by a new line to stdout
 * @s: string arg
 */
void print_rev(char *s)
{
	int c, i;

	for (c = 0; c >= 0; c++)
		if (s[c] == '\0')
			break;

	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

