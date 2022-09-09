#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

