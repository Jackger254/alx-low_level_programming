#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alaphabets in reverse
 * Return: 0 always
 */
int main(void)
{
	int ascii_z = 'z';
	int i;

	for (i = 0; i < 26; ++i)
	{
		putchar(ascii_z - i);
	}
	putchar('\n');
	return (0);

}
