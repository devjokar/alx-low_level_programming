#include "main.h"

/**
 * print_chessboard - displays chessboard
 * @a: chess matrix
 */
void print_chessboard(int (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

