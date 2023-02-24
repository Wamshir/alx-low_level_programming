#include "main.h"

/**
 * _isdigit - Check if didgit is character
 * @x: The number to be checked
 * Return: 1 for a digit character, 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
