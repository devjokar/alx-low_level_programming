#include "main.h"

/**
 * _strdup - return pointer to steing duplicate
 * @str: input string
 * Return: pointer to mem containing duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i, c;
	char *s;

	if (str == NULL)
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
		;
	c++;
	s = malloc(sizeof(char) * c);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < c; i++)
		s[i] = str[i];
	return (s);
}

