#include "main.h"
/**
 * _isalpha - checks for alphabetical characters
 * @c: the character to be checked
 * Return: 1 for alphabetical characters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
