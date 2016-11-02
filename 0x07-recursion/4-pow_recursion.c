#include "holberton.h"
/**
 * _pow_recursion - return x to y power
 * @x: int 1
 * @y: int 2
 *
 * Return: -1, 1, or x to y power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
