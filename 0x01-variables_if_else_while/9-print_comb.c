#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}

