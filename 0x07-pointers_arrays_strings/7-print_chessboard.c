#include "main.h"

/**
 * print_chessboard - displays chessboard
 * @a: chess matrix
 */
void print_chessboard(int (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\0');
		i++;
	}
}

