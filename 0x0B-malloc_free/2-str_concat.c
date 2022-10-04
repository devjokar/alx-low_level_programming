#include "main.h"

/**
 * str_concat - Combine two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to combined string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int c, d, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (c = 0; c < i; c++)
		s[c] = s1[c];
	for (d = 0; d < j + 1; d++)
		s[c] = s2[d];
	return (s);
}

