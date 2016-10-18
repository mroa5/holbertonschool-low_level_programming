#include "holberton.h"
/**
 * _abs - gets absolute number of input
 * @n: int getting absolute integer
 *
 * Return: n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		n = n * 1;
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
