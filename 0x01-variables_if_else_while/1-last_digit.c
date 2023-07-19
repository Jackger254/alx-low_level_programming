#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the value n
 *  identifies if the last digit is greater than 5
 *  equals to zero, or less than 6 and not equal to 0
 * Return: 0 if successfuly executed, non-zero otherwise
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);
}
