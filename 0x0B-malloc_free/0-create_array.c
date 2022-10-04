#include "main.h"

/**
 * create_array - create array.. and fill with specific char
 * @size: array size
 * @c: specific char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(aizeof(char) * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

