#include "main.h"
/**
 * jack_bauer - prints every minute of Jack bauer from 00:00 to 23:59
 * return: ...
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
			}
			_putchar('0' + h);
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
			}
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
