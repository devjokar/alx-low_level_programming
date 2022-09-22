#include "main.h"

/**
 * _strcmp - compare two given strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if both are equal
 * another number otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;
	while (j == 0)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			break;
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}

