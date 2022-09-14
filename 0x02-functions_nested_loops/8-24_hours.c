#include "main.h"

/**
 * jack_bauer - Display minutes of a day
 */
void jack_bauer(void)
{
	int c, d;

	c = 0;
	while (c < 24)
	{
		d = 0;
		while (d < 60)
		{
			if (c < 10)
			{
				_putchar(48);
				_putchar(48 + c % 10);
			}
			else
			{
				_putchar(48 + c / 10);
				_putchar(48 + c % 10);
			}
			_putchar(':');
			if (d < 10)
			{
				_putchar(48);
				_putchar(48 + d);
			}
			else
			{
				_putchar(48 + d / 10);
				_putchar(48 + d % 10);
			}
			_putchar('\n');
			d++;
		}
		c++;
	}
}

