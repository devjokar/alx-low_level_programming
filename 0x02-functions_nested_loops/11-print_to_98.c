#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Display all natural numbers
 * from n to 98
 *
 * @n: integer argument
 */
void print_to_98(int n)
{
	for (; n > 98; n--)
		printf("%d, ", n);
	for (; n < 98; n++)
		printf("%d, ", n);
	printf("%d\n, ", 98);
}

