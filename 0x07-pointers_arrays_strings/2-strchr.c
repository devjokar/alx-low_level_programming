#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: char
 * Return: Pointer to first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	if (s[i] == c)
		return (s[i]);
	return ('\0');
}

