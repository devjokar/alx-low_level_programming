#include "main.h"

/**
 * _strstr - finds first occurrence of sunstring needle in haystack
 * @haystack: given sring
 * @needle: substring
 * Return: Pointer to haystack
 */
char *_strstr(char *haystck, char *needle)
{
	char *b, *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;
		while (*haystack != '\0' && *p != '\0' && *haystack == p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}
	return ('\0');
}

