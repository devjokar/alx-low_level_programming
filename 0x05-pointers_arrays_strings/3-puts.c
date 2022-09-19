#include "main.h"

/**
 * _puts - displays a string, followed by a new line to stdout
 * @str: string arg
 */
void _puts(char *str)
{
	int c;

	for (c = 0; c >= 0; c++)
	{
		if (str[c] == '\0')
			break;
		_putchar(str[c]);
	}
	_putchar('\n');
}

