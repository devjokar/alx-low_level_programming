#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc;)
	{
		n++;
		(*argv)++;
	}
	printf("%i\n", n - 1);
	return (0);
}

