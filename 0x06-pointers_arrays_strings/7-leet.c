#include "main.h"

/**
 * leet - encode a string in leet
 * @s: input string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

