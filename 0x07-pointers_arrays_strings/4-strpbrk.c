#include "main.h"

/**
 * _strpbrk - searches a steing for any of a set of byyes
 * @s: first string
 * @accept: second string
 * Return: Pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s[i]);
			j++;
		}
		i++;
	}
	return ('\0');
}

