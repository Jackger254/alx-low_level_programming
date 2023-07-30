#include "main.h"
/**
 * _abs - prints the absolute value of an interger
 * @i: the interger to be computed
 * Return: The absolute value or 0
 */
int _abs(int i)

{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
