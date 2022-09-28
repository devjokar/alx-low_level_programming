#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial str segment
 * @accept: accepted bytes
 * Return: Number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	i = j = 0;
	while (s[i] != '\0')
	{
		n = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n = 0;
				break;
			}
			j++;
		}
		if (n == 1)
			break;
		i++;
	}
	return (i);
}

