#include "main.h"
/**
 * _memset - Fill a block of memory with code
 * @s: Starting addrsss of memeory to be filled.
 * @b: The desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for a bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
