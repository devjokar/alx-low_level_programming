#include "main.h"

/**
 * cap_string - capitalizes words in a string
 * @s: input string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i, j;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
		j = 0;
		while (j < 13)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

