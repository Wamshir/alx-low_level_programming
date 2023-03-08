#include <unistd.h>
/**
 * _putchar -  This is my _putchar.
 * @c: Input
 *Return: Always (0)
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
