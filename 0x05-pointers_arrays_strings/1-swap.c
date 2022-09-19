#include "main.h"

/**
 * swap_int - swaps the vlaues of two integers
 * @a: first integer arg
 * @b: second int arg
 */
void swap_int(int *a, int *b)
{
	int t; /* temporary variable */

	t = *a;
	*a = *b;
	*b = t;
}

