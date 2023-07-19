#include <stdio.h>
/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 if successfuly executed, non-zero otherwise
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar (d);
		d++;
	}
	putchar('\n');
	return (0);
}
