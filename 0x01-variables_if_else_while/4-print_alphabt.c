#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabets except e and q
 *
 * return: 0 if executed successfuly, non-zero otherwise
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}

	putchar('\n');
	return (0);
}

