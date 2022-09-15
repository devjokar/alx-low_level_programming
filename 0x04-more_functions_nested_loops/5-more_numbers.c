#include "main.h"

/**
 * more_numbers - 
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b >= 10)
				_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			b++;
		}
		_putchar('\n');
		a++;
	}
}

