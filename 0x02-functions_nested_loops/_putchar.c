#include <unistd.h>
/**
 * _putchar - writes the character c to the std output
 * @c: the character to print
 * Return: onsuccess 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
