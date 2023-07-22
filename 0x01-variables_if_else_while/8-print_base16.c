#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 always
 */
int main(void)
{
	char hex_digits[] = "123456789abcdef";
	int i;

	for (i = 0; i < 16; ++i)
	{
		putchar(hex_digits[i]);
	}
	putchar('\n');
	return (0);
}
