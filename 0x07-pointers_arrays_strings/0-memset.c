#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

