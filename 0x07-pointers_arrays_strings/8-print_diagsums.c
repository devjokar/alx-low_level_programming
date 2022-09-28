#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - displays the sum of the two diagonals of a matrix
 * @a: given matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sa = 0, sb = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
			sa += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sb += a[i];
		i++;
	}
	printf("%d, %d\n", sa, sb);
}

