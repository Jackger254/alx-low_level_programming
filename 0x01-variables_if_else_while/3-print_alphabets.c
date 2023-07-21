#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabets in lower and upper case
 *
 * Return: 0 if successfuly executed, non-zero otherwise
 */
int main(void)
{
	char low;
		for (low = 'a'; low <= 'z'; low++)
			putchar(low);
		for (low = 'A'; low <= 'Z'; low++)
			putchar(low);
		putchar('\n');
		return (0);
}
