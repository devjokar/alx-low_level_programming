#include "main.h"

/**
 * reverse_array - reverse array contents
 * @a: array
 * @n: array length
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	while (i < n / 2)
	{
		j = n - i - 1;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
	}
}

