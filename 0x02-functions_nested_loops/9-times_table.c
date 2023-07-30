#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 * return: empty output
 */
void times_table(void)
{
	int j, k, l, m, o;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			l = j * k;
				if (l > 9)
				{
					m = l % 10;
					o = (l - m) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(o + '0');
					_putchar(m + '0');
				}
				else
				{
					if (k != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
					_putchar(l + '0');
				}
		}
		_putchar('\n');
	}
}
