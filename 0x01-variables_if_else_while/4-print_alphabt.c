#include <stdio.h>

/**
 *  main - Entry Point
 *
 *  Return: always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

