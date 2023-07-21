#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number
 *
 * Return: 0 on successful execution, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	/* your code goes there */
	return (0);
}
