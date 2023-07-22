#include <stdio.h>
/**
 * main - prints single digits tobase ten
 * Return: 0 if successfuly executed, non-zero otherwise
 */
int main(void)
{
	int ascii_zero = '0';
	int i;

		for (i = 0; i <= 9; i++)
		{
			putchar(ascii_zero + i);
		}

		putchar('\n');
		return (0);
}
