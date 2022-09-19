#include "main.h"

/**
 * _strlen - returns the length of a string param
 * @s: character pointer arg
 * Return: string length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; c >= 0; c++)
		if (s[c] == '\0')
			break;
	return (c);
}

