#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to power y
 * @x: Value to multiply
 * @y: Times ro multiply value
 *
 * Return: The value to be multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
